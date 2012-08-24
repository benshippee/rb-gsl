/////////////////////////////////////////////////////////////////////
// = NMatrix
//
// A linear algebra library for scientific computation in Ruby.
// NMatrix is part of SciRuby.
//
// NMatrix was originally inspired by and derived from NArray, by
// Masahiro Tanaka: http://narray.rubyforge.org
//
// == Copyright Information
//
// SciRuby is Copyright (c) 2010 - 2012, Ruby Science Foundation
// NMatrix is Copyright (c) 2012, Ruby Science Foundation
//
// Please see LICENSE.txt for additional copyright notices.
//
// == Contributing
//
// By contributing source code to SciRuby, you agree to be bound by
// our Contributor Agreement:
//
// * https://github.com/SciRuby/sciruby/wiki/Contributor-Agreement
//
// == data.h
//
// Header file for dealing with data types.

#ifndef RUBY_CONSTANTS_H
#define RUBY_CONSTANTS_H

/*
 * Standard Includes
 */

#include <ruby.h>

/*
 * Project Includes
 */

/*
 * Macros
 */

/*
 * Types
 */

/*
 * Data
 */

extern ID nm_rb_real,
					nm_rb_imag,
		
					nm_rb_numer,
					nm_rb_denom,
		
					nm_rb_complex_conjugate,
					nm_rb_transpose,
					nm_rb_no_transpose,
		
					nm_rb_dense,
					nm_rb_list,
					nm_rb_yale,
		
					nm_rb_add,
					nm_rb_sub,
					nm_rb_mul,
					nm_rb_div,
		
					nm_rb_percent,
					nm_rb_gt,
					nm_rb_lt,
					nm_rb_eql,
					nm_rb_neql,
					nm_rb_gte,
					nm_rb_lte;

extern VALUE	cNMatrix,
              cNMatrix_IO,
              cNMatrix_IO_Matlab,
							cNVector,
							cNMatrix_YaleFunctions,
							cNMatrix_BLAS,
			
							nm_eDataTypeError,
							nm_eStorageTypeError;

/*
 * Functions
 */

void nm_init_ruby_constants(void);

#endif // RUBY_CONSTANTS_H
