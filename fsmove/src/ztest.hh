/*
 * fstransform - transform a file-system to another file-system type,
 *               preserving its contents and without the need for a backup
 *
 * Copyright (C) 2011-2017 Massimiliano Ghilardi
 *
 *     This program is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * ztest.hh
 *
 *  Created on: Jan 23, 2017
 *      Author: max
 */

#ifndef FSTRANSFORM_ZTEST_HH
#define FSTRANSFORM_ZTEST_HH

#include "types.hh" /* for ft_size */

FT_NAMESPACE_BEGIN

void ztest();
void ztest_ptr(ft_size allocation_count = 961);

FT_NAMESPACE_END

#endif /* FSTRANSFORM_ZTEST_HH */