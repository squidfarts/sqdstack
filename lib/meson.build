###################################################################################
#                                                                                 #
# NAME: src/meson.build                                                           #
#                                                                                 #
# AUTHOR: Michael Brockus.                                                        #
#                                                                                 #
# CONTACT: <mailto:michael@squidfarts.com>                                        #
#                                                                                 #
# NOTICES:                                                                        #
#                                                                                 #
# License: Apache 2.0 :http://www.apache.org/licenses/LICENSE-2.0                 #
#                                                                                 #
###################################################################################



sqdstack_dir = include_directories('.')

sqdstack_lib = static_library(meson.project_name(), 
    sources: 'stack.c',
    include_directories: sqdstack_dir)

sqdstack_dep = declare_dependency(
    version: meson.project_version(),
    link_with: sqdstack_lib,
    include_directories: sqdstack_dir)