#!/user/bin/env python3
###################################################################################
#                                                                                 #
# NAME: test.py                                                                   #
#                                                                                 #
# AUTHOR: Michael Brockus.                                                        #
#                                                                                 #
# CONTACT: <mailto:michael@squidfarts.com>                                        #
#                                                                                 #
# NOTICES:                                                                        #
#                                                                                 #
# License: Apache-2.0                                                             #
#                                                                                 #
###################################################################################
import subprocess, os

subprocess.call('meson test -C build_dir', shell=True)