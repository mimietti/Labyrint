#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`1<UnitySocial/EntryPointState>
struct Action_1_t4034847796;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnitySocial_EntryPoi3886395091.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<UnitySocial/EntryPointState>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m160021025_gshared (Action_1_t4034847796 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Action_1__ctor_m160021025(__this, ___object0, ___method1, method) ((  void (*) (Action_1_t4034847796 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m160021025_gshared)(__this, ___object0, ___method1, method)
// System.Void System.Action`1<UnitySocial/EntryPointState>::Invoke(T)
extern "C"  void Action_1_Invoke_m3246764780_gshared (Action_1_t4034847796 * __this, EntryPointState_t3886395091  ___obj0, const MethodInfo* method);
#define Action_1_Invoke_m3246764780(__this, ___obj0, method) ((  void (*) (Action_1_t4034847796 *, EntryPointState_t3886395091 , const MethodInfo*))Action_1_Invoke_m3246764780_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Action`1<UnitySocial/EntryPointState>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m467739507_gshared (Action_1_t4034847796 * __this, EntryPointState_t3886395091  ___obj0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Action_1_BeginInvoke_m467739507(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Action_1_t4034847796 *, EntryPointState_t3886395091 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m467739507_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Void System.Action`1<UnitySocial/EntryPointState>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m1827679726_gshared (Action_1_t4034847796 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Action_1_EndInvoke_m1827679726(__this, ___result0, method) ((  void (*) (Action_1_t4034847796 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m1827679726_gshared)(__this, ___result0, method)
