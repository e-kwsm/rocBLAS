/* ************************************************************************
 * Copyright (C) 2016-2023 Advanced Micro Devices, Inc. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell cop-
 * ies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IM-
 * PLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNE-
 * CTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * ************************************************************************ */
#pragma once

#include "handle.hpp"
#include "rocblas.h"

template <typename API_INT, bool CONJ, typename T, typename U, typename V, typename W>
rocblas_status rocblas_internal_ger_launcher_64(rocblas_handle handle,
                                                API_INT        m,
                                                API_INT        n,
                                                const V*       alpha,
                                                rocblas_stride stride_alpha,
                                                const U*       x,
                                                rocblas_stride offsetx,
                                                API_INT        incx,
                                                rocblas_stride stridex,
                                                const U*       y,
                                                rocblas_stride offsety,
                                                API_INT        incy,
                                                rocblas_stride stridey,
                                                W*             A,
                                                rocblas_stride offsetA,
                                                API_INT        lda,
                                                rocblas_stride strideA,
                                                API_INT        batch_count);

template <typename T>
ROCBLAS_INTERNAL_EXPORT_NOINLINE rocblas_status
    rocblas_internal_ger_template_64(rocblas_handle handle,
                                     int64_t        m,
                                     int64_t        n,
                                     const T*       alpha,
                                     rocblas_stride stride_alpha,
                                     const T*       x,
                                     rocblas_stride offsetx,
                                     int64_t        incx,
                                     rocblas_stride stridex,
                                     const T*       y,
                                     rocblas_stride offsety,
                                     int64_t        incy,
                                     rocblas_stride stridey,
                                     T*             A,
                                     rocblas_stride offsetA,
                                     int64_t        lda,
                                     rocblas_stride strideA,
                                     int64_t        batch_count);

template <typename T>
ROCBLAS_INTERNAL_EXPORT_NOINLINE rocblas_status
    rocblas_internal_gerc_template_64(rocblas_handle handle,
                                      int64_t        m,
                                      int64_t        n,
                                      const T*       alpha,
                                      rocblas_stride stride_alpha,
                                      const T*       x,
                                      rocblas_stride offsetx,
                                      int64_t        incx,
                                      rocblas_stride stridex,
                                      const T*       y,
                                      rocblas_stride offsety,
                                      int64_t        incy,
                                      rocblas_stride stridey,
                                      T*             A,
                                      rocblas_stride offsetA,
                                      int64_t        lda,
                                      rocblas_stride strideA,
                                      int64_t        batch_count);

template <typename T>
ROCBLAS_INTERNAL_EXPORT_NOINLINE rocblas_status
    rocblas_internal_ger_batched_template_64(rocblas_handle  handle,
                                             int64_t         m,
                                             int64_t         n,
                                             const T*        alpha,
                                             rocblas_stride  stride_alpha,
                                             const T* const* x,
                                             rocblas_stride  offsetx,
                                             int64_t         incx,
                                             rocblas_stride  stridex,
                                             const T* const* y,
                                             rocblas_stride  offsety,
                                             int64_t         incy,
                                             rocblas_stride  stridey,
                                             T* const*       A,
                                             rocblas_stride  offsetA,
                                             int64_t         lda,
                                             rocblas_stride  strideA,
                                             int64_t         batch_count);

template <typename T>
ROCBLAS_INTERNAL_EXPORT_NOINLINE rocblas_status
    rocblas_internal_gerc_batched_template_64(rocblas_handle  handle,
                                              int64_t         m,
                                              int64_t         n,
                                              const T*        alpha,
                                              rocblas_stride  stride_alpha,
                                              const T* const* x,
                                              rocblas_stride  offsetx,
                                              int64_t         incx,
                                              rocblas_stride  stridex,
                                              const T* const* y,
                                              rocblas_stride  offsety,
                                              int64_t         incy,
                                              rocblas_stride  stridey,
                                              T* const*       A,
                                              rocblas_stride  offsetA,
                                              int64_t         lda,
                                              rocblas_stride  strideA,
                                              int64_t         batch_count);
