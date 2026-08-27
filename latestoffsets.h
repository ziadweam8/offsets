#pragma once

/*
  Zela Dumper 
   Made by king_okr, ziadweam8 & pibbly
   rbx custom-WindowsPlayer-version-f5a60436d48947d3
   Time taken 48.48s
   Offsets found 160
   Date 2026-08-28 00:46:11

*/

#include <cstdint>
#include <Windows.h>

struct lua_State;
struct YieldState;
struct YieldingLuaThread;
struct DataModel;
struct TaskScheduler;

// //? = may be wrong, may be wrong, may be wrong, may be wrong, may be wrong, 

#define REBASE(Address) (Address + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1C68FE0);
    const uintptr_t OpcodeLookupTable = REBASE(0x6D45820);
    const uintptr_t ScriptContextResume = REBASE(0x40CBD40);
    const uintptr_t GetLuaStateForInstance = REBASE(0x402B3C0);
    const uintptr_t GetTLSPointer = REBASE(0x4170);

    namespace Luau
    {
        const uintptr_t Luau_Execute = REBASE(0x26BDA30); //?
        const uintptr_t LuaO_NilObject = REBASE(0x62F7418);
        const uintptr_t LuaH_DummyNode = REBASE(0x62F6EC8);
        const uintptr_t luaf_newproto = REBASE(0x26E0D10);
        const uintptr_t freeobj = REBASE(0x26BB0C0);
        const uintptr_t luaF_freeproto = REBASE(0x26E1420);
        const uintptr_t PushInstance = REBASE(0x4013BA0);
        const uintptr_t ConnectionDisconnect = REBASE(0x3FF6360);
        const uintptr_t luaL_typerrorL = REBASE(0x269BDF0);
        const uintptr_t luaL_argerrorL = REBASE(0x26DEC20);
    }

    namespace RemoteEvent //(credits ravage)
    {
        const uintptr_t FireClient = REBASE(0x33EFA50);
        const uintptr_t FireServer = REBASE(0x33EF8B0);
        const uintptr_t InvokeServer = REBASE(0x34520D0);
        const uintptr_t InvokeClient = REBASE(0x34522D0);
        const uintptr_t FireAllClients = REBASE(0x33EFCFB);
    }

    namespace Raycast
    {
        const uintptr_t RaycastBoundDesc = REBASE(0x8089F20);
        const uintptr_t RaycastBoundFn = 0x80; 
    }

    namespace LuaLib
    {
        const uintptr_t print = REBASE(0x26E63C0);
        const uintptr_t assert = REBASE(0x26EBB40);
        const uintptr_t error = REBASE(0x26E6810);
        const uintptr_t gcinfo = REBASE(0x26EA470);
        const uintptr_t getfenv = REBASE(0x26E7E70);
        const uintptr_t getmetatable = REBASE(0x26E7250);
        const uintptr_t next = REBASE(0x26EB090);
        const uintptr_t newproxy = REBASE(0x26ECA60);
        const uintptr_t rawequal = REBASE(0x26E8160);
        const uintptr_t rawget = REBASE(0x26E8270);
        const uintptr_t rawset = REBASE(0x26E87C0);
        const uintptr_t rawlen = REBASE(0x26EA3D0);
        const uintptr_t select = REBASE(0x26EBBF0);
        const uintptr_t setfenv = REBASE(0x26E7F30);
        const uintptr_t setmetatable = REBASE(0x26E73D0);
        const uintptr_t tonumber = REBASE(0x26E6490);
        const uintptr_t tostring = REBASE(0x26ECA00);
        const uintptr_t type = REBASE(0x26EA490);
        const uintptr_t typeof = REBASE(0x26EAA90);
    }

    namespace StringLib
    {
        const uintptr_t byte = REBASE(0x54EDD90);
        const uintptr_t find = REBASE(0x54EFC60);
        const uintptr_t format = REBASE(0x54F1C40);
        const uintptr_t gmatch = REBASE(0x54F0040);
        const uintptr_t gsub = REBASE(0x54F1630);
        const uintptr_t len = REBASE(0x54EC890);
        const uintptr_t lower = REBASE(0x54ED500);
        const uintptr_t match = REBASE(0x54EFC70);
        const uintptr_t pack = REBASE(0x54F3830);
        const uintptr_t packsize = REBASE(0x54F4190);
        const uintptr_t rep = REBASE(0x54ED7A0);
        const uintptr_t reverse = REBASE(0x54ED3B0);
        const uintptr_t split = REBASE(0x54F2270);
        const uintptr_t sub = REBASE(0x54EC940);
        const uintptr_t unpack = REBASE(0x54F4500);
        const uintptr_t upper = REBASE(0x54ED650);
        const uintptr_t char_ = REBASE(0x54EE020);
    }

    namespace TableLib
    {
        const uintptr_t clear = REBASE(0x54E4B40);
        const uintptr_t clone = REBASE(0x54E4D90);
        const uintptr_t concat = REBASE(0x54E1B90);
        const uintptr_t create = REBASE(0x54E3EB0);
        const uintptr_t foreach = REBASE(0x54DDE20);
        const uintptr_t foreachi = REBASE(0x54DD0C0);
        const uintptr_t freeze = REBASE(0x54E4B90);
        const uintptr_t getn = REBASE(0x54DF240);
        const uintptr_t insert = REBASE(0x54E0310);
        const uintptr_t isfrozen = REBASE(0x54E4CE0);
        const uintptr_t maxn = REBASE(0x54DEF80);
        const uintptr_t move = REBASE(0x54E0880);
        const uintptr_t remove = REBASE(0x54E0510);
        const uintptr_t sort = REBASE(0x54E3D30);
        const uintptr_t pack = REBASE(0x54E1EB0);
        const uintptr_t unpack = REBASE(0x54E26F0);
        const uintptr_t find = REBASE(0x54E46A0);
    }

    namespace Bit32Lib
    {
        const uintptr_t arshift = REBASE(0x5505E30);
        const uintptr_t band = REBASE(0x55058A0);
        const uintptr_t bnot = REBASE(0x5505B50);
        const uintptr_t bor = REBASE(0x5505950);
        const uintptr_t btest = REBASE(0x55058D0);
        const uintptr_t bxor = REBASE(0x5505A50);
        const uintptr_t byteswap = REBASE(0x5506680);
        const uintptr_t countlz = REBASE(0x55063F0);
        const uintptr_t countrz = REBASE(0x5506540);
        const uintptr_t extract = REBASE(0x55061F0);
        const uintptr_t lrotate = REBASE(0x5506020);
        const uintptr_t lshift = REBASE(0x5505BE0);
        const uintptr_t replace = REBASE(0x55062B0);
        const uintptr_t rrotate = REBASE(0x55060A0);
        const uintptr_t rshift = REBASE(0x5505D00);
    }

    namespace Utf8Lib
    {
        const uintptr_t codepoint = REBASE(0x54E8790);
        const uintptr_t codes = REBASE(0x54E9810);
        const uintptr_t offset = REBASE(0x54E92C0);
        const uintptr_t char_ = REBASE(0x54E8B30);
        const uintptr_t len = REBASE(0x54E84B0);
    }

    namespace CoroutineLib
    {
        const uintptr_t close_ = REBASE(0x5504330);
        const uintptr_t isyieldable = REBASE(0x55042B0);
        const uintptr_t running = REBASE(0x5504240);
        const uintptr_t status = REBASE(0x5502340);
        const uintptr_t wrap = REBASE(0x5503F60);
        const uintptr_t yield = REBASE(0x55041E0);
        const uintptr_t create = REBASE(0x55039B0);
    }

    namespace BufferLib
    {
        const uintptr_t fromstring = REBASE(0x54FD930);
        const uintptr_t readbits = REBASE(0x54FF140);
        const uintptr_t readf32 = REBASE(0x54FFF00);
        const uintptr_t readf64 = REBASE(0x5500060);
        const uintptr_t readi16 = REBASE(0x54FF980);
        const uintptr_t readi32 = REBASE(0x54FFC40);
        const uintptr_t readi8 = REBASE(0x54FF6C0);
        const uintptr_t readinteger = REBASE(0x54FDF80);
        const uintptr_t readstring = REBASE(0x54FE1D0);
        const uintptr_t readu16 = REBASE(0x54FFAE0);
        const uintptr_t readu32 = REBASE(0x54FFDA0);
        const uintptr_t readu8 = REBASE(0x54FF820);
        const uintptr_t writebits = REBASE(0x54FF380);
        const uintptr_t writef32 = REBASE(0x5500640);
        const uintptr_t writef64 = REBASE(0x55007D0);
        const uintptr_t writei16 = REBASE(0x5500340);
        const uintptr_t writei32 = REBASE(0x55004C0);
        const uintptr_t writei8 = REBASE(0x55001C0);
        const uintptr_t writeinteger = REBASE(0x54FE090);
        const uintptr_t writestring = REBASE(0x54FE8B0);
        const uintptr_t writeu16 = REBASE(0x5500340);
        const uintptr_t writeu32 = REBASE(0x55004C0);
        const uintptr_t writeu8 = REBASE(0x55001C0);
        const uintptr_t copy = REBASE(0x54FEC00);
        const uintptr_t fill = REBASE(0x54FEEF0);
        const uintptr_t len = REBASE(0x54FEB50);
        const uintptr_t tostring = REBASE(0x54FDA00);
        const uintptr_t create = REBASE(0x54FD880);
    }

    namespace Task
    {
        const uintptr_t spawn = REBASE(0x4186E10);
        const uintptr_t defer = REBASE(0x4186980);
        const uintptr_t delay = REBASE(0x4187180);
        const uintptr_t wait = REBASE(0x4187480);
        const uintptr_t cancel = REBASE(0x41876F0);
        const uintptr_t synchronize = REBASE(0x41859A0);
        const uintptr_t desynchronize = REBASE(0x4185DB0);
    }

    namespace ExtraSpace
    {
        const uintptr_t RequireBypass = REBASE(0xA00);
        const uintptr_t IsCoreScript = REBASE(0x168);
        const uintptr_t LockViolationInstanceCrash = REBASE(0x8431FA0); //?
    }

    namespace Globals
    {
        const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6E83B48); //?
        const uintptr_t IdentityPtr = REBASE(0x8051178);
    }

    namespace TaskScheduler
    {
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x80993C8);
        const uintptr_t TaskSchedulerPointer = REBASE(0x8A44D60);
        const uintptr_t JobStart = 0xC8;
        const uintptr_t JobName = 0x18;
    }

    namespace FFlag
    {
        const uintptr_t SetFFlag = REBASE(0x2B6A552); // magically fixed itself idk if it works or not
        // GetFFlag Not found
    }

    namespace Raknet
    {
        const uintptr_t RaknetSend = REBASE(0x28908C0);
        const uintptr_t RaknetReceive = REBASE(0x2890EB0);
        const uintptr_t DeallocatePacket = REBASE(0x2891550);
        const uintptr_t vtable = REBASE(0x6AD6D90);
    }
}

namespace Roblox
{
    inline auto Print = (uintptr_t(*)(int, const char*, ...))Offsets::Print;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetLuaStateForInstance = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetLuaStateForInstance;
    inline auto ScriptContextResume = (uint64_t(__fastcall*)(uint64_t, YieldState*, YieldingLuaThread**, uint32_t, uint8_t, uint64_t))Offsets::ScriptContextResume;
}
