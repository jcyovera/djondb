#!/usr/bin/env python

"""
setup.py file for djondb python driver 
"""

from distutils.core import setup, Extension


pydjondb_module = Extension('_pydjondb',
		sources=['djonpythondriver.cpp'],
		include_dirs=['include'],
		libraries=['djon-client']
		)

setup (name = 'pydjondb',
		version = '0.120121204',
		author      = "Cross",
		author_email = "cross@djondb.com",
		license = "GPL",
		description = """Python driver for djondb""",
		ext_modules = [pydjondb_module],
		py_modules = ["pydjondb"],
		)