#!/usr/bin/env python
from __future__ import print_function
import glob
import os
import platform
import subprocess
import sys
import traceback
from distutils.command.install import INSTALL_SCHEMES
from distutils.sysconfig import get_python_inc
from distutils.util import convert_path
from setuptools import find_packages
from setuptools import setup
# Get all template files
templates = []
for dirpath, dirnames, filenames in os.walk(convert_path('pwnlib/shellcraft/templates'), followlinks=True):
    for f in filenames:
        templates.append(os.path.relpath(os.path.join(dirpath, f), 'pwnlib'))
# This makes pwntools-LICENSE.txt appear with the package folders
for scheme in INSTALL_SCHEMES.values():
    scheme['data'] = scheme['purelib']
console_scripts = ['pwn=pwnlib.commandline.main:main']
# Find all of the ancillary console scripts
# We have a magic flag --include-all-scripts
flag = '--only-use-pwn-command'
if flag in sys.argv:
    sys.argv.remove(flag)
else:
    flag = False
for filename in glob.glob('pwnlib/commandline*.h',
            'data/templates/*.mako',
        ] + templates,
    },
    entry_points = {'console_scripts': console_scripts},
    scripts              = glob.glob("bin/*"),
    description          = "Pwntools CTF framework and exploit development library.",
    long_description     = long_description,
    author               = "Gallopsled et al.",
    author_email         = "pwntools-users@googlegroups.com",
    url                  = 'https://pwntools.com',
    download_url         = "https://github.com/Gallopsled/pwntools/releases",
    install_requires     = install_requires,
    license              = "Mostly MIT, some GPL/BSD, see LICENSE-pwntools.txt",
    keywords             = 'pwntools exploit ctf capture the flag binary wargame overflow stack heap defcon',
    classifiers          = [
        'Development Status :: 5 - Production/Stable',
        'Environment :: Console',
        'Intended Audience :: Developers',
        'Intended Audience :: Science/Research',
        'Intended Audience :: System Administrators',
        'License :: OSI Approved :: MIT License',
        'Natural Language :: English',
        'Operating System :: POSIX :: Linux',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Topic :: Security',
        'Topic :: Software Development :: Assemblers',
        'Topic :: Software Development :: Debuggers',
        'Topic :: Software Development :: Disassemblers',
        'Topic :: Software Development :: Embedded Systems',
        'Topic :: Software Development :: Libraries :: Python Modules',
        'Topic :: System :: System Shells',
        'Topic :: Utilities',
    ]
)