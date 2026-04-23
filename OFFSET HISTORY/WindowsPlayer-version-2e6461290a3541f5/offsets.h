// LIVE-WindowsPlayer-version-2e6461290a3541f5
#pragma once
#include <cstdint>

namespace offsets {
    constexpr uintptr_t LuaD_Throw = 0x432f190;
    constexpr uintptr_t ScriptContextResume = 0x1d62ff0;
    constexpr uintptr_t rbx_print = 0x1dea630;
    constexpr uintptr_t FireClickDetector = 0x6f7d00;
    constexpr uintptr_t IsLegalSendEvent = 0x5588364; // may be wrong
    constexpr uintptr_t KTable = 0x749b470; // suspicious - could be correct
    constexpr uintptr_t luau_execute = 0x43487e0;
    constexpr uintptr_t Raknet_Send = 0x30dcdf0; // new - may be wrong
    constexpr uintptr_t RakNet_Receive = 0x30dd150; // new - may be wrong
    constexpr uintptr_t newpage = 0x4389ac0;
    constexpr uintptr_t newclasspage = 0x4389b70;
    constexpr uintptr_t freeclasspage = 0x4389be0;
    constexpr uintptr_t newblock = 0x4389d20;
    constexpr uintptr_t newgcoblock = 0x4389c80;
    constexpr uintptr_t freeblock = 0x4389db0;
    constexpr uintptr_t luaM_free = 0x4389e70;
    constexpr uintptr_t luaM_freegco = 0x4389ef0;
    constexpr uintptr_t luaM_visitgco = 0x438a000;
    constexpr uintptr_t f_luaopen = 0x4331f80;
    constexpr uintptr_t tostring = 0x436a780;
    constexpr uintptr_t lua_rawcheckstack = 0x432d4d0;
    constexpr uintptr_t luaA_toobject = 0x19c01caf;
    constexpr uintptr_t lua_pushvfstring = 0x432e070;
    constexpr uintptr_t luaL_checklstring = 0x4336250;
    constexpr uintptr_t luaL_checkany = 0x43694b0;
    constexpr uintptr_t luaG_runerrorL = 0x4340010;
    constexpr uintptr_t luaO_pushvfstring = 0x43a04c0;
    constexpr uintptr_t luaF_freeproto = 0x4389EF0; // fixed
    constexpr uintptr_t luaF_newproto = 0x4399130;
    constexpr uintptr_t luaD_rawrunprotected = 0x432f160;
    constexpr uintptr_t luaV_getimport = 0x4340810;
    constexpr uintptr_t luaC_step = 0x433ef90;
    constexpr uintptr_t GetLuaState = 0x1c33cf0;
    constexpr uintptr_t Bridge_registerClass = 0x1c279a0;
    constexpr uintptr_t Vector3Bridge_registerClass = 0x1ccb1b0;
    constexpr uintptr_t coroutine_create = 0x436d920;
    constexpr uintptr_t OpcodeLookupTable = 0x432e0e0;
    constexpr uintptr_t coroutine_running = 0x436dfc0;
    constexpr uintptr_t remapUserdataTypes = 0x4340ea0;
}