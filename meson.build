project('Etheria-std', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])


######################################
#           
#
#         COMPILER AND LINKER
#
#
######################################

cc = meson.get_compiler('c')
linker = cc.get_linker_id()

if (host_machine.system() == 'linux')
  ld = find_program('ld', required : true)
endif

######################################
#           
#
#           DEPENDENCIES
#
#
######################################

criterion_dep = dependency('criterion', required: false)

######################################
#           
#
#           INCLUDES
#
#
######################################

incdir = include_directories('inc')

######################################
#           
#
#           SOURCES
#
#
######################################

srcs = files('src/memory/memcpy/memcpy.c')


######################################
#           
#
#           TESTS
#
#
######################################

tests = files('tests/memory/memcpy/memcpy_naive/memcpy_naive.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_stack_buf_aligned_small.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_stack_buf_aligned_mid.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_stack_buf_aligned_big.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_overlap.c')

summary({
  'CPU': build_machine.cpu(),
  'Endian': build_machine.endian(),
  'System': build_machine.system()
  }, section: 'Machine Information')

if (host_machine.system() == 'linux')
summary({
  'C Compiler': cc.get_id() + ' ' + cc.version(),
  'Dynamic linker path': ld,
  'Dynamic linker': ld.version(),
  }, section: 'Compiler and Linker Information')
else
summary({
  'C Compiler': cc.get_id() + ' ' + cc.version(),
  }, section: 'Compiler Information')
endif

summary({
  'Name': meson.project_name(),
  'Version': meson.project_version(),
  'Root': meson.source_root(),
  'Cross Platform': meson.is_cross_build(),
  'Prefix': get_option('prefix'),
  'Libdir': get_option('libdir'),
  'Datadir': get_option('datadir'),
  }, section: 'Project Overview')


if (get_option('no_static'))
  add_project_arguments('-DNO_STATIC=1', language: 'c')
endif

if host_machine.system() == 'windows'

  static_library('etheria-std',
        srcs,
        install: true,
        install_dir: 'dist',
        include_directories: incdir)
else
  lib_shared = shared_library('etheria-std',
              srcs,
              c_args: ['-Werror', '-nostdlib', '-nodefaultlibs', '-O3', '-Oz', '-fPIC', '-shared'],
              install: true,
              install_dir: 'dist/shared',
              include_directories: incdir)

  lib_static = static_library('etheria-std',
        srcs,
        c_args: ['-Werror', '-nostdlib', '-nodefaultlibs', '-O3', '-Oz', '-static-pie'],
        install: true,
        install_dir: 'dist/static',
        include_directories: incdir)
endif


if get_option('build_tests') and host_machine.system() == 'linux'
foreach test_file : tests
  test_name = 'test_' + test_file.full_path().split('/')[-1].split('.c')[0]
  test_exec = executable(test_name,
    test_file,
    c_args: ['-Werror', '-g3', '-O3', '-Oz', '-fPIC'],
    dependencies: [criterion_dep],
    link_with: lib_static,
    include_directories: incdir,
    install: true,
    install_dir: 'tests/output/',
    pie: true)
  test(test_name, test_exec)
endforeach
endif
