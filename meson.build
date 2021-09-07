# SPDX-License-Identifier: GPL-2.0-only

project('types', 'c', 
  license: 'GPL-2.0-only')

include = include_directories('.')

types_dep = declare_dependency(include_directories: include)

install_headers('types.h', subdir: 'trainslibs')

pkg_mod = import('pkgconfig')
pkg_mod.generate(name: 'libtypes',
  filebase: 'types',
  subdirs: 'trainslibs',
  url: 'https://github.com/Trainraider/types.git',
  description: 'Just some basic C types')
