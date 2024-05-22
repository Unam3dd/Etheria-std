project('Etheria-std', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])


cc = meson.get_compiler('c')
linker = cc.get_linker_id()
ld = find_program('ld', required : true)

incdir = include_directories('inc')
srcs = files('src/memory/memcpy/memcpy.c')

summary({
  'CPU': build_machine.cpu(),
  'CPU Family': build_machine.cpu_family(),
  'Endian': build_machine.endian(),
  'System': build_machine.system()
  }, section: 'Machine Information')

summary({
  'C Compiler': cc.get_id() + ' ' + cc.version(),
  'Dynamic linker path': ld,
  'Dynamic linker': ld.version(),
  }, section: 'Compiler and Linker Information')

summary({
  'Name': meson.project_name(),
  'Version': meson.project_version(),
  'Root': meson.source_root(),
  'Cross Platform': meson.is_cross_build(),
  'Prefix': get_option('prefix'),
  'Libdir': get_option('libdir'),
  'Datadir': get_option('datadir'),
  }, section: 'Project Overview')


shared_library('etheria-std',
              srcs,
              c_args: ['-Werror', '-nostdlib', '-nodefaultlibs', '-O3', '-Oz', '-fPIE', '-shared'],
              install: true,
              install_dir: 'dist/shared',
              include_directories: incdir)

static_library('etheria-std',
        srcs,
        c_args: ['-Werror', '-nostdlib', '-nodefaultlibs', '-O3', '-Oz', '-static-pie'],
        install: true,
        install_dir: 'dist/static',
        include_directories: incdir)
