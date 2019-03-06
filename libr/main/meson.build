r_main_sources = [
  'main.c',
  'r2agent.c',
  'rabin2.c',
  'radare2.c',
  'radiff2.c',
  'rafind2.c',
  'ragg2.c',
  'rahash2.c',
  'rarun2.c',
  'rasm2.c',
  'rax2.c',
  'version.c',
]

r_main = library('r_main', r_main_sources,
  include_directories: [platform_inc],
  c_args: library_cflags,
  dependencies: [
    r_util_dep,
    r_asm_dep,
    r_syscall_dep,
    sdb_dep
  ],
  install: true,
  implicit_include_directories: false,
  soversion: r2_libversion
)

r_main_dep = declare_dependency(link_with: r_main,
                               include_directories: [platform_inc])

pkgconfig_mod.generate(r_main,
  subdirs: 'libr',
  version: r2_version,
  name: 'r_main',
  filebase: 'r_main',
  requires: [
    'r_core',
    'r_asm',
    'r_syscall'
  ],
  description: 'radare foundation libraries'
)
