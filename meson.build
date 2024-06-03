project('Etheria-std', 'c',
  version : '0.1',
  default_options : ['warning_level=3', 'werror=true', 'optimization=3', 'buildtype=release'])


######################################
#           
#
#         COMPILER AND LINKER
#
#
######################################

cc = meson.get_compiler('c')
linker = cc.get_linker_id()

if not cc.has_function_attribute('ifunc')
  error('The Target compiler does not support ifunc function attribute.')
endif

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

if get_option('build_tests')
  criterion = dependency('criterion', required: true)
endif

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


types_tests = files('tests/types/types_basic_test.c')

memory_memcpy_naive = files('tests/memory/memcpy/memcpy_naive/memcpy_naive.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_stack_buf_aligned_small.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_stack_buf_aligned_mid.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_stack_buf_aligned_big.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_overlap.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_stack_buf_unaligned_small.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_stack_buf_unaligned_mid.c',
  'tests/memory/memcpy/memcpy_naive/memcpy_naive_stack_buf_unaligned_big.c')

tests = types_tests + memory_memcpy_naive

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

######################################
#           
#
#           ARGUMENTS
#
#
######################################

add_project_arguments('-DNO_STATIC=1', language: 'c')

if host_machine.system() == 'windows'

  static_library('etheria-std',
        srcs,
        install: true,
        install_dir: 'dist',
        include_directories: incdir)
else
  lib_shared = shared_library('etheria-std',
              srcs,
              c_args: ['-nostdlib', '-nodefaultlibs', '-fPIC'],
              install: true,
              install_dir: 'dist/shared',
              include_directories: incdir)

  lib_static = static_library('etheria-std',
    srcs,
    c_args: ['-nostdlib', '-nodefaultlibs'],
    install: true,
    install_dir: 'dist/static',
    include_directories: incdir)
endif


if get_option('build_tests') and host_machine.system() == 'linux'
foreach test_file : tests
  test_name = 'test_' + test_file.full_path().split('/')[-1].split('.c')[0]
  test_exec = executable(test_name,
    test_file,
    c_args: ['-g3', '-fPIC'],
    dependencies: [criterion],
    link_with: lib_static,
    include_directories: incdir,
    install: false,
    pie: true)
  test(test_name, test_exec, verbose: false)
endforeach
endif
