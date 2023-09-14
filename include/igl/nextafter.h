// This file is part of libigl, a simple c++ geometry processing library.
// 
// Copyright (C) 2015 Alec Jacobson <alecjacobson@gmail.com>
// 
// This Source Code Form is subject to the terms of the Mozilla Public License 
// v. 2.0. If a copy of the MPL was not distributed with this file, You can 
// obtain one at http://mozilla.org/MPL/2.0/.
#ifndef IGL_NEXTAFTER_H
#define IGL_NEXTAFTER_H

#include "igl_inline.h"
#include <Eigen/Core>

namespace igl
{
/// Increment Unit in Last Place of a matrix
///
/// @param[in,out]  inout  input vector
/// @param[in]      it  number of increments
template <typename Derived>
IGL_INLINE void nextafter(
    Eigen::MatrixBase<Derived>& inout,
    int it);
}

#ifndef IGL_STATIC_LIBRARY
#  include "nextafter.cpp"
#endif

#endif
