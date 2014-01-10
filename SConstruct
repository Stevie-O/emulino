# SConstruct file for emulino
# Copyright 2009 Greg Hewgill
#
# This file is part of Emulino.
#
# Emulino is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Emulino is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Emulino.  If not, see <http://www.gnu.org/licenses/>.

# The selection of 'mingw' over 'msvc' must be done first thing. 'msvc' adds
# a bunch of MSVC-specific env vars that are difficult to remove later.

import os

use_tools = ['default']
if os.name == 'nt':
	# NT (Windows): scons defaults to MSVC, but emulino code requires GCC, and that means mingw
	# furthermore, this has no effect:
	# env.Replace(tools = ['mingw'])
	# while this does not succeed (because the original 'msvc' env pollutes CFLAGS with custom args)
	# env = env.Clone(tools = ['mingw'])
	use_tools = ['mingw']

env = Environment(ENV = os.environ, tools = use_tools, CFLAGS = "-Wall -Werror")

env.Program("emulino", ["emulino.c", "loader.c", "cpu.c", "eeprom.c", "port.c", "timer.c", "usart.c"])
env.Command("avr.inc", ["mkinst.py", "instructions.txt"], "python mkinst.py")
