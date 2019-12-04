// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-vadd.yaml
//   Generator: tools/generate-vbinary-test.py


#include <gtest/gtest.h>

#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/vbinary.h>
#include "vbinary-microkernel-tester.h"


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VADD__NEON_X4, batch_eq_4) {
    TEST_REQUIRES_ARM_NEON;
    VBinOpMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vadd_ukernel__neon_x4, VBinOpMicrokernelTester::OpType::Add);
  }

  TEST(F32_VADD__NEON_X4, batch_div_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__neon_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X4, batch_lt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__neon_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X4, batch_gt_4) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 5; batch_size < 8; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__neon_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X4, inplace_a) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .Test(xnn_f32_vadd_ukernel__neon_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X4, inplace_b) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__neon_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X4, inplace_a_and_b) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__neon_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X4, qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_f32_vadd_ukernel__neon_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X4, qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_f32_vadd_ukernel__neon_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_ARM || XNN_ARCH_ARM64
  TEST(F32_VADD__NEON_X8, batch_eq_8) {
    TEST_REQUIRES_ARM_NEON;
    VBinOpMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vadd_ukernel__neon_x8, VBinOpMicrokernelTester::OpType::Add);
  }

  TEST(F32_VADD__NEON_X8, batch_div_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__neon_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X8, batch_lt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__neon_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X8, batch_gt_8) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__neon_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X8, inplace_a) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .Test(xnn_f32_vadd_ukernel__neon_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X8, inplace_b) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__neon_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X8, inplace_a_and_b) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__neon_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X8, qmin) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_f32_vadd_ukernel__neon_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__NEON_X8, qmax) {
    TEST_REQUIRES_ARM_NEON;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_f32_vadd_ukernel__neon_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }
#endif  // XNN_ARCH_ARM || XNN_ARCH_ARM64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VADD__SSE_X4, batch_eq_4) {
    TEST_REQUIRES_X86_SSE;
    VBinOpMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vadd_ukernel__sse_x4, VBinOpMicrokernelTester::OpType::Add);
  }

  TEST(F32_VADD__SSE_X4, batch_div_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__sse_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X4, batch_lt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__sse_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X4, batch_gt_4) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 5; batch_size < 8; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__sse_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X4, inplace_a) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .Test(xnn_f32_vadd_ukernel__sse_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X4, inplace_b) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__sse_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X4, inplace_a_and_b) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__sse_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X4, qmin) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_f32_vadd_ukernel__sse_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X4, qmax) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_f32_vadd_ukernel__sse_x4, VBinOpMicrokernelTester::OpType::Add);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if XNN_ARCH_X86 || XNN_ARCH_X86_64
  TEST(F32_VADD__SSE_X8, batch_eq_8) {
    TEST_REQUIRES_X86_SSE;
    VBinOpMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vadd_ukernel__sse_x8, VBinOpMicrokernelTester::OpType::Add);
  }

  TEST(F32_VADD__SSE_X8, batch_div_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__sse_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X8, batch_lt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__sse_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X8, batch_gt_8) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__sse_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X8, inplace_a) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .Test(xnn_f32_vadd_ukernel__sse_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X8, inplace_b) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__sse_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X8, inplace_a_and_b) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__sse_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X8, qmin) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_f32_vadd_ukernel__sse_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }

  TEST(F32_VADD__SSE_X8, qmax) {
    TEST_REQUIRES_X86_SSE;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_f32_vadd_ukernel__sse_x8, VBinOpMicrokernelTester::OpType::Add);
    }
  }
#endif  // XNN_ARCH_X86 || XNN_ARCH_X86_64


#if !XNN_ARCH_ASMJS && !XNN_ARCH_WASM
  TEST(F32_VADD__PSIMD_X4, batch_eq_4) {
    TEST_REQUIRES_PSIMD;
    VBinOpMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vadd_ukernel__psimd_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }

  TEST(F32_VADD__PSIMD_X4, batch_div_4) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__psimd_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X4, batch_lt_4) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__psimd_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X4, batch_gt_4) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 5; batch_size < 8; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__psimd_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X4, inplace_a) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .Test(xnn_f32_vadd_ukernel__psimd_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X4, inplace_b) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__psimd_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X4, inplace_a_and_b) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__psimd_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X4, qmin) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_f32_vadd_ukernel__psimd_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X4, qmax) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_f32_vadd_ukernel__psimd_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }
#endif  // !XNN_ARCH_ASMJS && !XNN_ARCH_WASM


#if !XNN_ARCH_ASMJS && !XNN_ARCH_WASM
  TEST(F32_VADD__PSIMD_X8, batch_eq_8) {
    TEST_REQUIRES_PSIMD;
    VBinOpMicrokernelTester()
      .batch_size(8)
      .Test(xnn_f32_vadd_ukernel__psimd_x8, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }

  TEST(F32_VADD__PSIMD_X8, batch_div_8) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 16; batch_size < 80; batch_size += 8) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__psimd_x8, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X8, batch_lt_8) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size < 8; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__psimd_x8, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X8, batch_gt_8) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 9; batch_size < 16; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__psimd_x8, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X8, inplace_a) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .Test(xnn_f32_vadd_ukernel__psimd_x8, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X8, inplace_b) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__psimd_x8, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X8, inplace_a_and_b) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__psimd_x8, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X8, qmin) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_f32_vadd_ukernel__psimd_x8, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__PSIMD_X8, qmax) {
    TEST_REQUIRES_PSIMD;
    for (size_t batch_size = 1; batch_size <= 40; batch_size += 7) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_f32_vadd_ukernel__psimd_x8, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }
#endif  // !XNN_ARCH_ASMJS && !XNN_ARCH_WASM


#if XNN_ARCH_WASM
  TEST(F32_VADD__WASM_X1, batch_eq_1) {
    VBinOpMicrokernelTester()
      .batch_size(1)
      .Test(xnn_f32_vadd_ukernel__wasm_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }

  TEST(F32_VADD__WASM_X1, batch_gt_1) {
    for (size_t batch_size = 2; batch_size < 10; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__wasm_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X1, inplace_a) {
    for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .Test(xnn_f32_vadd_ukernel__wasm_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X1, inplace_b) {
    for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__wasm_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X1, inplace_a_and_b) {
    for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__wasm_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X1, qmin) {
    for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_f32_vadd_ukernel__wasm_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X1, qmax) {
    for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_f32_vadd_ukernel__wasm_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }
#endif  // XNN_ARCH_WASM


#if XNN_ARCH_WASM
  TEST(F32_VADD__WASM_X2, batch_eq_2) {
    VBinOpMicrokernelTester()
      .batch_size(2)
      .Test(xnn_f32_vadd_ukernel__wasm_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }

  TEST(F32_VADD__WASM_X2, batch_div_2) {
    for (size_t batch_size = 4; batch_size < 20; batch_size += 2) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__wasm_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X2, batch_lt_2) {
    for (size_t batch_size = 1; batch_size < 2; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__wasm_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X2, batch_gt_2) {
    for (size_t batch_size = 3; batch_size < 4; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__wasm_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X2, inplace_a) {
    for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .Test(xnn_f32_vadd_ukernel__wasm_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X2, inplace_b) {
    for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__wasm_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X2, inplace_a_and_b) {
    for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__wasm_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X2, qmin) {
    for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_f32_vadd_ukernel__wasm_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X2, qmax) {
    for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_f32_vadd_ukernel__wasm_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }
#endif  // XNN_ARCH_WASM


#if XNN_ARCH_WASM
  TEST(F32_VADD__WASM_X4, batch_eq_4) {
    VBinOpMicrokernelTester()
      .batch_size(4)
      .Test(xnn_f32_vadd_ukernel__wasm_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }

  TEST(F32_VADD__WASM_X4, batch_div_4) {
    for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__wasm_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X4, batch_lt_4) {
    for (size_t batch_size = 1; batch_size < 4; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__wasm_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X4, batch_gt_4) {
    for (size_t batch_size = 5; batch_size < 8; batch_size++) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .Test(xnn_f32_vadd_ukernel__wasm_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X4, inplace_a) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .Test(xnn_f32_vadd_ukernel__wasm_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X4, inplace_b) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__wasm_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X4, inplace_a_and_b) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .inplace_a(true)
        .inplace_b(true)
        .Test(xnn_f32_vadd_ukernel__wasm_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X4, qmin) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmin(128)
        .Test(xnn_f32_vadd_ukernel__wasm_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }

  TEST(F32_VADD__WASM_X4, qmax) {
    for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
      VBinOpMicrokernelTester()
        .batch_size(batch_size)
        .qmax(128)
        .Test(xnn_f32_vadd_ukernel__wasm_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
    }
  }
#endif  // XNN_ARCH_WASM


TEST(F32_VADD__SCALAR_X1, batch_eq_1) {
  VBinOpMicrokernelTester()
    .batch_size(1)
    .Test(xnn_f32_vadd_ukernel__scalar_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
}

TEST(F32_VADD__SCALAR_X1, batch_gt_1) {
  for (size_t batch_size = 2; batch_size < 10; batch_size++) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vadd_ukernel__scalar_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X1, inplace_a) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .inplace_a(true)
      .Test(xnn_f32_vadd_ukernel__scalar_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X1, inplace_b) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .inplace_b(true)
      .Test(xnn_f32_vadd_ukernel__scalar_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X1, inplace_a_and_b) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .inplace_a(true)
      .inplace_b(true)
      .Test(xnn_f32_vadd_ukernel__scalar_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X1, qmin) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .qmin(128)
      .Test(xnn_f32_vadd_ukernel__scalar_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X1, qmax) {
  for (size_t batch_size = 1; batch_size <= 5; batch_size += 1) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .qmax(128)
      .Test(xnn_f32_vadd_ukernel__scalar_x1, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X2, batch_eq_2) {
  VBinOpMicrokernelTester()
    .batch_size(2)
    .Test(xnn_f32_vadd_ukernel__scalar_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
}

TEST(F32_VADD__SCALAR_X2, batch_div_2) {
  for (size_t batch_size = 4; batch_size < 20; batch_size += 2) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vadd_ukernel__scalar_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X2, batch_lt_2) {
  for (size_t batch_size = 1; batch_size < 2; batch_size++) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vadd_ukernel__scalar_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X2, batch_gt_2) {
  for (size_t batch_size = 3; batch_size < 4; batch_size++) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vadd_ukernel__scalar_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X2, inplace_a) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .inplace_a(true)
      .Test(xnn_f32_vadd_ukernel__scalar_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X2, inplace_b) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .inplace_b(true)
      .Test(xnn_f32_vadd_ukernel__scalar_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X2, inplace_a_and_b) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .inplace_a(true)
      .inplace_b(true)
      .Test(xnn_f32_vadd_ukernel__scalar_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X2, qmin) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .qmin(128)
      .Test(xnn_f32_vadd_ukernel__scalar_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X2, qmax) {
  for (size_t batch_size = 1; batch_size <= 10; batch_size += 1) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .qmax(128)
      .Test(xnn_f32_vadd_ukernel__scalar_x2, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X4, batch_eq_4) {
  VBinOpMicrokernelTester()
    .batch_size(4)
    .Test(xnn_f32_vadd_ukernel__scalar_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
}

TEST(F32_VADD__SCALAR_X4, batch_div_4) {
  for (size_t batch_size = 8; batch_size < 40; batch_size += 4) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vadd_ukernel__scalar_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X4, batch_lt_4) {
  for (size_t batch_size = 1; batch_size < 4; batch_size++) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vadd_ukernel__scalar_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X4, batch_gt_4) {
  for (size_t batch_size = 5; batch_size < 8; batch_size++) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .Test(xnn_f32_vadd_ukernel__scalar_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X4, inplace_a) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .inplace_a(true)
      .Test(xnn_f32_vadd_ukernel__scalar_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X4, inplace_b) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .inplace_b(true)
      .Test(xnn_f32_vadd_ukernel__scalar_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X4, inplace_a_and_b) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .inplace_a(true)
      .inplace_b(true)
      .Test(xnn_f32_vadd_ukernel__scalar_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X4, qmin) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .qmin(128)
      .Test(xnn_f32_vadd_ukernel__scalar_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}

TEST(F32_VADD__SCALAR_X4, qmax) {
  for (size_t batch_size = 1; batch_size <= 20; batch_size += 3) {
    VBinOpMicrokernelTester()
      .batch_size(batch_size)
      .qmax(128)
      .Test(xnn_f32_vadd_ukernel__scalar_x4, VBinOpMicrokernelTester::OpType::Add, VBinOpMicrokernelTester::Variant::Scalar);
  }
}