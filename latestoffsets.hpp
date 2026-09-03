#pragma once

/*
  Zela Dumper 
   Made by king_okr, ziadweam8 & pibbly
   rbx WEAO-LIVE-WindowsPlayer-version-e7d81637d42c4b23
   Time taken 63.72s
   Offsets found 153
   Date 2026-09-03 02:33:22

*/

#include <cstdint>
#include <Windows.h>

struct lua_State;
struct YieldState;
struct YieldingLuaThread;
struct DataModel;
struct TaskScheduler;

#define REBASE(Address) (Address + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1C8A050);
    // OpcodeLookupTable Not found
    const uintptr_t ScriptContextResume = REBASE(0x4115130);
    const uintptr_t GetLuaStateForInstance = REBASE(0x4077F80);
    const uintptr_t GetTLSPointer = REBASE(0x39A0);

    namespace Luau
    {
        const uintptr_t Luau_Execute = REBASE(0x26E4530);
        const uintptr_t LuaO_NilObject = REBASE(0x63516D8);
        const uintptr_t LuaH_DummyNode = REBASE(0x6351188);
        const uintptr_t luaf_newproto = REBASE(0x2707B60);
        const uintptr_t luaF_freeproto = REBASE(0x2708260);
        const uintptr_t PushInstance = REBASE(0x40608A0);
        const uintptr_t ConnectionDisconnect = REBASE(0x40410A0);
        const uintptr_t luaL_typerrorL = REBASE(0x26C2D50);
        const uintptr_t luaL_argerrorL = REBASE(0x2705AA0);
    }

    namespace RemoteEvent // (credits ravage)
    {
        const uintptr_t FireClient = REBASE(0x3431E50);
        const uintptr_t FireServer = REBASE(0x3431CB0);
        const uintptr_t InvokeServer = REBASE(0x3494AB0);
        const uintptr_t InvokeClient = REBASE(0x3494CB0);
        const uintptr_t FireAllClients = REBASE(0x34320FB);
    }

    namespace Raycast
    {
        const uintptr_t RaycastBoundDesc = REBASE(0x80FA4C0);
        const uintptr_t RaycastBoundFn = 0x80; 
    }

    namespace LuaLib
    {
        const uintptr_t print = REBASE(0x270D270);
        const uintptr_t assert = REBASE(0x27129C0);
        const uintptr_t error = REBASE(0x270D6D0);
        const uintptr_t gcinfo = REBASE(0x2711300);
        const uintptr_t getfenv = REBASE(0x270ED00);
        const uintptr_t getmetatable = REBASE(0x270E110);
        const uintptr_t next = REBASE(0x2711F10);
        const uintptr_t newproxy = REBASE(0x27138E0);
        const uintptr_t rawequal = REBASE(0x270EFF0);
        const uintptr_t rawget = REBASE(0x270F100);
        const uintptr_t rawset = REBASE(0x270F650);
        const uintptr_t rawlen = REBASE(0x2711260);
        const uintptr_t select = REBASE(0x2712A70);
        const uintptr_t setfenv = REBASE(0x270EDC0);
        const uintptr_t setmetatable = REBASE(0x270E290);
        const uintptr_t tonumber = REBASE(0x270D340);
        const uintptr_t tostring = REBASE(0x2713880);
        const uintptr_t type = REBASE(0x2711320);
        const uintptr_t typeof = REBASE(0x2711920);
    }

    namespace StringLib
    {
        const uintptr_t byte = REBASE(0x5544E60);
        const uintptr_t find = REBASE(0x5546D20);
        const uintptr_t format = REBASE(0x5548D00);
        const uintptr_t gmatch = REBASE(0x5547110);
        const uintptr_t gsub = REBASE(0x55486F0);
        const uintptr_t len = REBASE(0x5543960);
        const uintptr_t lower = REBASE(0x55445D0);
        const uintptr_t match = REBASE(0x5546D30);
        const uintptr_t pack = REBASE(0x554A8E0);
        const uintptr_t packsize = REBASE(0x554B240);
        const uintptr_t rep = REBASE(0x5544870);
        const uintptr_t reverse = REBASE(0x5544480);
        const uintptr_t split = REBASE(0x5549330);
        const uintptr_t sub = REBASE(0x5543A10);
        const uintptr_t unpack = REBASE(0x554B5B0);
        const uintptr_t upper = REBASE(0x5544720);
        const uintptr_t char_ = REBASE(0x55450F0);
    }

    namespace TableLib
    {
        const uintptr_t clear = REBASE(0x553BC40);
        const uintptr_t clone = REBASE(0x553BE90);
        const uintptr_t concat = REBASE(0x5538C90);
        const uintptr_t create = REBASE(0x553AFC0);
        const uintptr_t foreach = REBASE(0x5534F20);
        const uintptr_t foreachi = REBASE(0x55341C0);
        const uintptr_t freeze = REBASE(0x553BC90);
        const uintptr_t getn = REBASE(0x5536340);
        const uintptr_t insert = REBASE(0x5537430);
        const uintptr_t isfrozen = REBASE(0x553BDE0);
        const uintptr_t maxn = REBASE(0x5536080);
        const uintptr_t move = REBASE(0x55379A0);
        const uintptr_t remove = REBASE(0x5537630);
        const uintptr_t sort = REBASE(0x553AE40);
        const uintptr_t pack = REBASE(0x5538FB0);
        const uintptr_t unpack = REBASE(0x55397F0);
        const uintptr_t find = REBASE(0x553B7B0);
    }

    namespace Bit32Lib
    {
        const uintptr_t arshift = REBASE(0x555CF70);
        const uintptr_t band = REBASE(0x555C9E0);
        const uintptr_t bnot = REBASE(0x555CC90);
        const uintptr_t bor = REBASE(0x555CA90);
        const uintptr_t btest = REBASE(0x555CA10);
        const uintptr_t bxor = REBASE(0x555CB90);
        const uintptr_t byteswap = REBASE(0x555D7D0);
        const uintptr_t countlz = REBASE(0x555D530);
        const uintptr_t countrz = REBASE(0x555D680);
        const uintptr_t extract = REBASE(0x555D330);
        const uintptr_t lrotate = REBASE(0x555D160);
        const uintptr_t lshift = REBASE(0x555CD20);
        const uintptr_t replace = REBASE(0x555D3F0);
        const uintptr_t rrotate = REBASE(0x555D1E0);
        const uintptr_t rshift = REBASE(0x555CE40);
    }

    namespace Utf8Lib
    {
        const uintptr_t codepoint = REBASE(0x553F890);
        const uintptr_t codes = REBASE(0x5540910);
        const uintptr_t offset = REBASE(0x55403C0);
        const uintptr_t char_ = REBASE(0x553FC30);
        const uintptr_t len = REBASE(0x553F5B0);
    }

    namespace CoroutineLib
    {
        const uintptr_t close_ = REBASE(0x555B4B0);
        const uintptr_t isyieldable = REBASE(0x555B420);
        const uintptr_t running = REBASE(0x555B3B0);
        const uintptr_t status = REBASE(0x55594C0);
        const uintptr_t wrap = REBASE(0x555B0E0);
        const uintptr_t yield = REBASE(0x555B350);
        const uintptr_t create = REBASE(0x555AB30);
    }

    namespace BufferLib
    {
        const uintptr_t fromstring = REBASE(0x5554AC0);
        const uintptr_t readbits = REBASE(0x55562D0);
        const uintptr_t readf32 = REBASE(0x5557090);
        const uintptr_t readf64 = REBASE(0x5557200);
        const uintptr_t readi16 = REBASE(0x5556B10);
        const uintptr_t readi32 = REBASE(0x5556DD0);
        const uintptr_t readi8 = REBASE(0x5556850);
        const uintptr_t readinteger = REBASE(0x5555110);
        const uintptr_t readstring = REBASE(0x5555360);
        const uintptr_t readu16 = REBASE(0x5556C70);
        const uintptr_t readu32 = REBASE(0x5556F30);
        const uintptr_t readu8 = REBASE(0x55569B0);
        const uintptr_t writebits = REBASE(0x5556510);
        const uintptr_t writef32 = REBASE(0x55577E0);
        const uintptr_t writef64 = REBASE(0x5557970);
        const uintptr_t writei16 = REBASE(0x55574E0);
        const uintptr_t writei32 = REBASE(0x5557660);
        const uintptr_t writei8 = REBASE(0x5557360);
        const uintptr_t writeinteger = REBASE(0x5555220);
        const uintptr_t writestring = REBASE(0x5555A40);
        const uintptr_t writeu16 = REBASE(0x55574E0);
        const uintptr_t writeu32 = REBASE(0x5557660);
        const uintptr_t writeu8 = REBASE(0x5557360);
        const uintptr_t copy = REBASE(0x5555D90);
        const uintptr_t fill = REBASE(0x5556080);
        const uintptr_t len = REBASE(0x5555CE0);
        const uintptr_t tostring = REBASE(0x5554B90);
        const uintptr_t create = REBASE(0x5554A10);
    }

    namespace Task
    {
        const uintptr_t spawn = REBASE(0x41D3DF0);
        const uintptr_t defer = REBASE(0x41D3960);
        const uintptr_t delay = REBASE(0x41D4160);
        const uintptr_t wait = REBASE(0x41D4460);
        const uintptr_t cancel = REBASE(0x41D46D0);
        const uintptr_t synchronize = REBASE(0x41D2980);
        const uintptr_t desynchronize = REBASE(0x41D2D90);
    }

    namespace ExtraSpace
    {
        const uintptr_t RequireBypass = REBASE(0xB01); //? 
        const uintptr_t IsCoreScript = REBASE(0x168);
        const uintptr_t LockViolationInstanceCrash = REBASE(0x84A33C0); //?
    }

    namespace Globals
    {
        const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6EE42E8); //?
        const uintptr_t IdentityPtr = REBASE(0x80C10C8);
    }

    namespace TaskScheduler
    {
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x8109DE8);
        const uintptr_t TaskSchedulerPointer = REBASE(0x8ABD720);
        const uintptr_t JobStart = 0xC8;
        const uintptr_t JobName = 0x18;
    }

    namespace Raknet
    {
        const uintptr_t RaknetSend = REBASE(0x28B8140);
        const uintptr_t RaknetReceive = REBASE(0x28B8730);
        const uintptr_t DeallocatePacket = REBASE(0x28B8DD0);
        const uintptr_t vtable = REBASE(0x6B32608);
    }
}

namespace Roblox
{
    inline auto Print = (uintptr_t(*)(int, const char*, ...))Offsets::Print;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetLuaStateForInstance = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetLuaStateForInstance;
    inline auto ScriptContextResume = (uint64_t(__fastcall*)(uint64_t, YieldState*, YieldingLuaThread**, uint32_t, uint8_t, uint64_t))Offsets::ScriptContextResume;
}
