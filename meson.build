project('Etheria-std', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

incdir = include_directories('inc')
src = files('src/memory/memcpy/memcpy.c')

shared_library('etheria-std',
              src,
              c_args: ['-nostdlib', '-O3', '-Oz', '-fPIE'],
              install: true,
              install_dir: 'dist/shared',
              include_directories: incdir)

static_library('etheria-std',
        src,
        c_args: ['-nostdlib', '-O3', '-Oz', '-static-pie'],
        install: true,
        install_dir: 'dist/static',
        include_directories: incdir)
