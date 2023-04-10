//
// Copyright (C) 2004-2022 Intel Corporation.
// SPDX-License-Identifier: MIT
//

#ifndef EMU_H
#define EMU_H

#include "pin.H"

#include "sde-reg-interface.H"
#include "sde-model-specific-features.h"

extern "C"
{
#include "sde-agen.h"
#include "sde-agen-types.h"
}

extern "C"
{
#include "xed-interface.h"
}

class TRACER_ENTRY;

class EMU_ISA
{
  public:
    static BOOL IsAgen(const INS ins);
    static BOOL IsAgenAndNative(const INS ins);
    static BOOL IsAgenRead(const THREADID pin_tid);

    static VOID FillMemTrace(THREADID pin_tid, TRACER_ENTRY& tracer_entry);

    static BOOL IsPageReadOnly(ADDRINT addr);
};

#endif
