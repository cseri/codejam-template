#!/usr/bin/env python
import os
import subprocess

script_dir_name = os.path.basename(os.path.dirname(os.path.realpath(__file__)))
print "Folder: " + script_dir_name

zn = script_dir_name

subprocess.check_call(["7z",
                       "a",
                       "-tzip",
                       zn + ".zip",
                       zn + ".cpp",
                       "stdafx.h"])

