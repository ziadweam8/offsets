#pragma once

/*
  Zela Dumper 
   Made by king_okr, ziadweam8 & pibbly
   rbx custom-WindowsPlayer-version-17d504d2c9544583
   Time taken 26.57s
   Offsets found 158
   Date 2026-08-25 18:30:05

*/

#include <cstdint>
#include <Windows.h>

struct lua_State;
struct YieldState;
struct YieldingLuaThread;
struct DataModel;
struct TaskScheduler;

#define REBASE(Address) (Address + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

//? = may be wrong, may be wrong, may be wrong, may be wrong, may be wrong, may be wrong,

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1C6A390);
    const uintptr_t OpcodeLookupTable = REBASE(0x6CF2E30);
    const uintptr_t ScriptContextResume = REBASE(0x40CE0B0);
    const uintptr_t GetLuaStateForInstance = REBASE(0x402E560);
    const uintptr_t GetTLSPointer = REBASE(0x4170);

    namespace Luau
    {
        const uintptr_t Luau_Execute = REBASE(0x26AAB00); //?
        const uintptr_t LuaO_NilObject = REBASE(0x62A1788);
        const uintptr_t LuaH_DummyNode = REBASE(0x62A0E58);
        // luaT_Eventnames Not found
        const uintptr_t luaf_newproto = REBASE(0x26CC9B0);
        const uintptr_t freeobj = REBASE(0x26A8290);
        const uintptr_t luaF_freeproto = REBASE(0x26CD070);
        const uintptr_t PushInstance = REBASE(0x4016BA0);
        // loadsafe Not found
        const uintptr_t ConnectionDisconnect = REBASE(0x3FFA080);
        // luaM_toobig Not found
        const uintptr_t luaL_typerrorL = REBASE(0x2689CE0);
        const uintptr_t luaL_argerrorL = REBASE(0x26CA9D0);
    }

    namespace RemoteEvent (credits ravage)
    {
        const uintptr_t FireClient = REBASE(0x341ADC0);
        const uintptr_t FireServer = REBASE(0x341AC20);
        const uintptr_t InvokeServer = REBASE(0x347D180);
        const uintptr_t InvokeClient = REBASE(0x347D380);
        const uintptr_t FireAllClients = REBASE(0x341B06B);
    }

    namespace Raycast
    {
        // RaycastBoundDesc Not found idk what the fuck they did
        const uintptr_t RaycastBoundFn = 0x80; // this is HARDCODED
    }

    namespace LuaLib
    {
        const uintptr_t print = REBASE(0x26D20C0);
        const uintptr_t assert = REBASE(0x26D76A0);
        const uintptr_t error = REBASE(0x26D2510);
        const uintptr_t gcinfo = REBASE(0x26D5FC0);
        const uintptr_t getfenv = REBASE(0x26D3B20);
        const uintptr_t getmetatable = REBASE(0x26D2F40);
        const uintptr_t next = REBASE(0x26D6BF0);
        const uintptr_t newproxy = REBASE(0x26D84E0);
        const uintptr_t rawequal = REBASE(0x26D3E10);
        const uintptr_t rawget = REBASE(0x26D3F20);
        const uintptr_t rawset = REBASE(0x26D4470);
        const uintptr_t rawlen = REBASE(0x26D5F20);
        const uintptr_t select = REBASE(0x26D7750);
        const uintptr_t setfenv = REBASE(0x26D3BE0);
        const uintptr_t setmetatable = REBASE(0x26D30C0);
        const uintptr_t tonumber = REBASE(0x26D2190);
        const uintptr_t tostring = REBASE(0x26D8480);
        const uintptr_t type = REBASE(0x26D5FE0);
        const uintptr_t typeof = REBASE(0x26D65E0);
        // pcall Not found
    }

    namespace StringLib
    {
        const uintptr_t byte = REBASE(0x54DF910);
        const uintptr_t find = REBASE(0x54E17B0);
        const uintptr_t format = REBASE(0x54E36E0);
        const uintptr_t gmatch = REBASE(0x54E1B90);
        const uintptr_t gsub = REBASE(0x54E30D0);
        const uintptr_t len = REBASE(0x54DE3E0);
        const uintptr_t lower = REBASE(0x54DF060);
        const uintptr_t match = REBASE(0x54E17C0);
        const uintptr_t pack = REBASE(0x54E52A0);
        const uintptr_t packsize = REBASE(0x54E5C00);
        const uintptr_t rep = REBASE(0x54DF300);
        const uintptr_t reverse = REBASE(0x54DEF10);
        const uintptr_t split = REBASE(0x54E3D10);
        const uintptr_t sub = REBASE(0x54DE490);
        const uintptr_t unpack = REBASE(0x54E5F70);
        const uintptr_t upper = REBASE(0x54DF1B0);
        const uintptr_t char_ = REBASE(0x54DFBA0);
    }

    namespace TableLib
    {
        const uintptr_t clear = REBASE(0x54D6850);
        const uintptr_t clone = REBASE(0x54D6AA0);
        const uintptr_t concat = REBASE(0x54D3910);
        const uintptr_t create = REBASE(0x54D5B80);
        const uintptr_t foreach = REBASE(0x54CFD00);
        const uintptr_t foreachi = REBASE(0x54CF020);
        const uintptr_t freeze = REBASE(0x54D68A0);
        const uintptr_t getn = REBASE(0x54D10A0);
        const uintptr_t insert = REBASE(0x54D2150);
        const uintptr_t isfrozen = REBASE(0x54D69F0);
        const uintptr_t maxn = REBASE(0x54D0DE0);
        const uintptr_t move = REBASE(0x54D26C0);
        const uintptr_t remove = REBASE(0x54D2350);
        const uintptr_t sort = REBASE(0x54D5A00);
        const uintptr_t pack = REBASE(0x54D3C30);
        const uintptr_t unpack = REBASE(0x54D4420);
        const uintptr_t find = REBASE(0x54D6310);
    }

    namespace Bit32Lib
    {
        const uintptr_t arshift = REBASE(0x54F7420);
        const uintptr_t band = REBASE(0x54F6E90);
        const uintptr_t bnot = REBASE(0x54F7140);
        const uintptr_t bor = REBASE(0x54F6F40);
        const uintptr_t btest = REBASE(0x54F6EC0);
        const uintptr_t bxor = REBASE(0x54F7040);
        const uintptr_t byteswap = REBASE(0x54F7C70);
        const uintptr_t countlz = REBASE(0x54F79E0);
        const uintptr_t countrz = REBASE(0x54F7B30);
        const uintptr_t extract = REBASE(0x54F77E0);
        const uintptr_t lrotate = REBASE(0x54F7610);
        const uintptr_t lshift = REBASE(0x54F71D0);
        const uintptr_t replace = REBASE(0x54F78A0);
        const uintptr_t rrotate = REBASE(0x54F7690);
        const uintptr_t rshift = REBASE(0x54F72F0);
    }

    namespace Utf8Lib
    {
        const uintptr_t codepoint = REBASE(0x54DA390);
        const uintptr_t codes = REBASE(0x54DB440);
        const uintptr_t offset = REBASE(0x54DAEF0);
        const uintptr_t char_ = REBASE(0x54DA730);
        const uintptr_t len = REBASE(0x54DA0B0);
    }

    namespace CoroutineLib
    {
        const uintptr_t close_ = REBASE(0x54F59C0);
        const uintptr_t isyieldable = REBASE(0x54F5940);
        const uintptr_t running = REBASE(0x54F58D0);
        const uintptr_t status = REBASE(0x54F3A60);
        const uintptr_t wrap = REBASE(0x54F5610);
        const uintptr_t yield = REBASE(0x54F5870);
        const uintptr_t create = REBASE(0x54F50D0);
        // resume Not found
    }

    namespace BufferLib
    {
        const uintptr_t fromstring = REBASE(0x54EF130);
        const uintptr_t readbits = REBASE(0x54F0940);
        const uintptr_t readf32 = REBASE(0x54F1700);
        const uintptr_t readf64 = REBASE(0x54F1860);
        const uintptr_t readi16 = REBASE(0x54F1180);
        const uintptr_t readi32 = REBASE(0x54F1440);
        const uintptr_t readi8 = REBASE(0x54F0EC0);
        const uintptr_t readinteger = REBASE(0x54EF780);
        const uintptr_t readstring = REBASE(0x54EF9D0);
        const uintptr_t readu16 = REBASE(0x54F12E0);
        const uintptr_t readu32 = REBASE(0x54F15A0);
        const uintptr_t readu8 = REBASE(0x54F1020);
        const uintptr_t writebits = REBASE(0x54F0B80);
        const uintptr_t writef32 = REBASE(0x54F1E40);
        const uintptr_t writef64 = REBASE(0x54F1FD0);
        const uintptr_t writei16 = REBASE(0x54F1B40);
        const uintptr_t writei32 = REBASE(0x54F1CC0);
        const uintptr_t writei8 = REBASE(0x54F19C0);
        const uintptr_t writeinteger = REBASE(0x54EF890);
        const uintptr_t writestring = REBASE(0x54F00B0);
        const uintptr_t writeu16 = REBASE(0x54F1B40);
        const uintptr_t writeu32 = REBASE(0x54F1CC0);
        const uintptr_t writeu8 = REBASE(0x54F19C0);
        const uintptr_t copy = REBASE(0x54F0400);
        const uintptr_t fill = REBASE(0x54F06F0);
        const uintptr_t len = REBASE(0x54F0350);
        const uintptr_t tostring = REBASE(0x54EF200);
        const uintptr_t create = REBASE(0x54EF080);
    }

    namespace Task
    {
        const uintptr_t spawn = REBASE(0x4187540);
        const uintptr_t defer = REBASE(0x41870B0);
        const uintptr_t delay = REBASE(0x41878B0);
        const uintptr_t wait = REBASE(0x4187BB0);
        const uintptr_t cancel = REBASE(0x4187E20);
        const uintptr_t synchronize = REBASE(0x41860A0);
        const uintptr_t desynchronize = REBASE(0x4186520);
    }

    namespace ExtraSpace
    {
        const uintptr_t RequireBypass = REBASE(0x9A0);
        const uintptr_t IsCoreScript = REBASE(0x168);
        const uintptr_t LockViolationInstanceCrash = REBASE(0x83CC8E0); //?
    }

    namespace Globals
    {
        const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6E367D8); //?
        const uintptr_t IdentityPtr = REBASE(0x7FEBD78);
    }

    namespace TaskScheduler
    {
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x803A7F8); //?
        const uintptr_t TaskSchedulerPointer = REBASE(0x89E0610); //?
        const uintptr_t JobStart = 0xC8;
        const uintptr_t JobName = 0x18;
    }

    namespace Raknet
    {
        const uintptr_t RaknetSend = REBASE(0x28CB940);
        const uintptr_t RaknetReceive = REBASE(0x28CBF30);
        const uintptr_t DeallocatePacket = REBASE(0x28CC5E0);
        const uintptr_t vtable = REBASE(0x6A7E578);
    }
}

namespace Roblox
{
    inline auto Print = (uintptr_t(*)(int, const char*, ...))Offsets::Print;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetLuaStateForInstance = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetLuaStateForInstance;
    inline auto ScriptContextResume = (uint64_t(__fastcall*)(uint64_t, YieldState*, YieldingLuaThread**, uint32_t, uint8_t, uint64_t))Offsets::ScriptContextResume;
}
