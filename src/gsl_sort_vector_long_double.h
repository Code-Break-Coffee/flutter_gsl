/* sort/gsl_sort_vector_long_double.h
 * 
 * Copyright (C) 1996, 1997, 1998, 1999, 2000, 2007 Thomas Walter, Brian Gough
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __GSL_SORT_VECTOR_LONG_DOUBLE_H__
#define __GSL_SORT_VECTOR_LONG_DOUBLE_H__

#include "stdlib.h"
#include "gsl_errno.h"
#include "gsl_permutation.h"
#include "gsl_vector_long_double.h"

#undef __BEGIN_DECLS
#undef __END_DECLS
#ifdef __cplusplus
# define __BEGIN_DECLS extern "C" {
# define __END_DECLS }
#else
# define __BEGIN_DECLS /* empty */
# define __END_DECLS /* empty */
#endif

__BEGIN_DECLS

void gsl_sort_vector_long_double (gsl_vector_long_double * v);
void gsl_sort_vector2_long_double (gsl_vector_long_double * v1, gsl_vector_long_double * v2);
int gsl_sort_vector_long_double_index (gsl_permutation * p, const gsl_vector_long_double * v);

int gsl_sort_vector_long_double_smallest (long double * dest, const size_t k, const gsl_vector_long_double * v);
int gsl_sort_vector_long_double_largest (long double * dest, const size_t k, const gsl_vector_long_double * v);

int gsl_sort_vector_long_double_smallest_index (size_t * p, const size_t k, const gsl_vector_long_double * v);
int gsl_sort_vector_long_double_largest_index (size_t * p, const size_t k, const gsl_vector_long_double * v);

__END_DECLS

#endif /* __GSL_SORT_VECTOR_LONG_DOUBLE_H__ */
