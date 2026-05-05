#pragma once

/*
  Zela Dumper 
   Made by king_okr & ziadweam8
   rbx LIVE-WindowsPlayer-version-acc4b74f79e743b9
   Time taken 4.73s
   Offsets found 22 -> 28
   Date 2026-05-05 15:07:02

*/

#include <cstdint>
#include <Windows.h>

struct lua_State;
struct YieldState;
struct YieldingLuaThread;

#define REBASE(Address) (Address + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1E21AD0);
    const uintptr_t OpcodeLookupTable = REBASE(0x646C630);
    const uintptr_t ScriptContextResume = REBASE(0x1D7CE90);
    const uintptr_t GetLuaStateForInstance = REBASE(0x1C4BAD0);

    namespace Luau
    {
        const uintptr_t Luau_Execute = REBASE(0x43AD490);
        const uintptr_t LuaO_NilObject = REBASE(0x5F52318);
        const uintptr_t LuaH_DummyNode = REBASE(0x5F518C8);
    }

    namespace DataModel
    {
        const uintptr_t ChildrenStart = 0x78;
        const uintptr_t GameLoaded = 0x5F8;
        // ScriptContext Not found
    }

    namespace ExtraSpace
    {
        const uintptr_t RequireBypass = REBASE(0x928);
        const uintptr_t IsCoreScript = REBASE(0x160);
        // ScriptContextToResume Not found
    }

    namespace Globals
    {
        // luaT_typenames Not found
        const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x63925D0);
        // luaT_Eventnames Not found
        const uintptr_t KTable = REBASE(0x751A7B0);
        // FlogDataBank Not found
    }

    namespace TaskScheduler
    {
        const uintptr_t RawScheduler = REBASE(0x7CF5400);
        const uintptr_t TaskSchedulerTargetFps = 0x118;
        const uintptr_t TaskSchedulerPointer = REBASE(0x7CF5400);
        const uintptr_t TaskSchedulerJobsStart = 0xC8;
        const uintptr_t TaskSchedulerJobName = 0x18;
    }

    namespace Raknet
    {
        const uintptr_t ProcessNetworkPacket = REBASE(0x134A750);
        // HandleConnectionState Not found
        // ReportNetworkError Not found
    }

    namespace Misc
    {
        const uintptr_t FireTouchInterest = REBASE(0x83F430);
        // fireProximityPrompt Not found
        const uintptr_t pushInstance = REBASE(0x1D43290);
        const uintptr_t luaf_newproto = REBASE(0x43FE8C0);
        const uintptr_t GetCurrentThreadId = REBASE(0x2F40);
        const uintptr_t IdentityPtr = REBASE(0x7661528);
        const uintptr_t GetIdentityStruct = REBASE(0x9060);
        const uintptr_t EnableLoadModule = REBASE(0x75A0878);
        // HashTableLookup Not found
        const uintptr_t LockViolationInstanceCrash = REBASE(0x7598008);
    }
}

namespace Roblox
{
    inline auto Print = (uintptr_t(*)(int, const char*, ...))Offsets::Print;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetLuaStateForInstance = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetLuaStateForInstance;
    inline auto ScriptContextResume = (uint64_t(__fastcall*)(uint64_t, YieldState*, YieldingLuaThread**, uint32_t, uint8_t, uint64_t))Offsets::ScriptContextResume;
}
