#pragma once

/*
  Zela Dumper 
   Made by king_okr, ziadweam8 & pibbly
   rbx custom-WindowsPlayer-version-37a6cf8c67114d6d
   Time taken 42.62s
   Offsets found 155
   Date 2026-08-25 02:19:40

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
    const uintptr_t Print = REBASE(0x1C68F10);
    const uintptr_t OpcodeLookupTable = REBASE(0x6D45830);
    const uintptr_t ScriptContextResume = REBASE(0x40CB220);
    const uintptr_t GetLuaStateForInstance = REBASE(0x402A8A0);
    const uintptr_t gettlspointer = REBASE(0x4170);

    namespace Luau
    {
        const uintptr_t Luau_Execute = REBASE(0x26BCF00); //?
        const uintptr_t LuaO_NilObject = REBASE(0x62F6F48);
        const uintptr_t LuaH_DummyNode = REBASE(0x62F3698);
        const uintptr_t luaf_newproto = REBASE(0x26E01E0);
        const uintptr_t freeobj = REBASE(0x26BA590);
        const uintptr_t luaF_freeproto = REBASE(0x26E08F0);
        const uintptr_t PushInstance = REBASE(0x4013080);
        // loadsafe Not found
        const uintptr_t ConnectionDisconnect = REBASE(0x3FF5840);
        const uintptr_t luaL_typerrorL = REBASE(0x269B2C0);
        const uintptr_t luaL_argerrorL = REBASE(0x26DE0F0);
    }

    namespace RemoteEvent //(credits ravage)
    {
        const uintptr_t FireClient = REBASE(0x33EEF50);
        const uintptr_t FireServer = REBASE(0x33EEDB0);
        const uintptr_t InvokeServer = REBASE(0x34515D0);
        const uintptr_t InvokeClient = REBASE(0x34517D0);
        const uintptr_t FireAllClients = REBASE(0x33EF1FB);
    }

    namespace Raycast
    {
        const uintptr_t RaycastBoundDesc = REBASE(0x8089DA0); // found manually
        const uintptr_t RaycastBoundFn = 0x80; // this is HARDCODED
    }

    namespace LuaLib
    {
        const uintptr_t print = REBASE(0x26E5890);
        const uintptr_t assert = REBASE(0x26EB010);
        const uintptr_t error = REBASE(0x26E5CE0);
        const uintptr_t gcinfo = REBASE(0x26E9940);
        const uintptr_t getfenv = REBASE(0x26E7340);
        const uintptr_t getmetatable = REBASE(0x26E6720);
        const uintptr_t next = REBASE(0x26EA560);
        const uintptr_t newproxy = REBASE(0x26EBF30);
        const uintptr_t rawequal = REBASE(0x26E7630);
        const uintptr_t rawget = REBASE(0x26E7740);
        const uintptr_t rawset = REBASE(0x26E7C90);
        const uintptr_t rawlen = REBASE(0x26E98A0);
        const uintptr_t select = REBASE(0x26EB0C0);
        const uintptr_t setfenv = REBASE(0x26E7400);
        const uintptr_t setmetatable = REBASE(0x26E68A0);
        const uintptr_t tonumber = REBASE(0x26E5960);
        const uintptr_t tostring = REBASE(0x26EBED0);
        const uintptr_t type = REBASE(0x26E9960);
        const uintptr_t typeof = REBASE(0x26E9F60);
        // pcall Not found
    }

    namespace StringLib
    {
        const uintptr_t byte = REBASE(0x54ED330);
        const uintptr_t find = REBASE(0x54EF200);
        const uintptr_t format = REBASE(0x54F11E0);
        const uintptr_t gmatch = REBASE(0x54EF5E0);
        const uintptr_t gsub = REBASE(0x54F0BD0);
        const uintptr_t len = REBASE(0x54EBE30);
        const uintptr_t lower = REBASE(0x54ECAA0);
        const uintptr_t match = REBASE(0x54EF210);
        const uintptr_t pack = REBASE(0x54F2DD0);
        const uintptr_t packsize = REBASE(0x54F3730);
        const uintptr_t rep = REBASE(0x54ECD40);
        const uintptr_t reverse = REBASE(0x54EC950);
        const uintptr_t split = REBASE(0x54F1810);
        const uintptr_t sub = REBASE(0x54EBEE0);
        const uintptr_t unpack = REBASE(0x54F3AA0);
        const uintptr_t upper = REBASE(0x54ECBF0);
        const uintptr_t char_ = REBASE(0x54ED5C0);
    }

    namespace TableLib
    {
        const uintptr_t clear = REBASE(0x54E40E0);
        const uintptr_t clone = REBASE(0x54E4330);
        const uintptr_t concat = REBASE(0x54E1130);
        const uintptr_t create = REBASE(0x54E3450);
        const uintptr_t foreach = REBASE(0x54DD3C0);
        const uintptr_t foreachi = REBASE(0x54DC660);
        const uintptr_t freeze = REBASE(0x54E4130);
        const uintptr_t getn = REBASE(0x54DE7E0);
        const uintptr_t insert = REBASE(0x54DF8B0);
        const uintptr_t isfrozen = REBASE(0x54E4280);
        const uintptr_t maxn = REBASE(0x54DE520);
        const uintptr_t move = REBASE(0x54DFE20);
        const uintptr_t remove = REBASE(0x54DFAB0);
        const uintptr_t sort = REBASE(0x54E32D0);
        const uintptr_t pack = REBASE(0x54E1450);
        const uintptr_t unpack = REBASE(0x54E1C90);
        const uintptr_t find = REBASE(0x54E3C40);
    }

    namespace Bit32Lib
    {
        const uintptr_t arshift = REBASE(0x55053D0);
        const uintptr_t band = REBASE(0x5504E40);
        const uintptr_t bnot = REBASE(0x55050F0);
        const uintptr_t bor = REBASE(0x5504EF0);
        const uintptr_t btest = REBASE(0x5504E70);
        const uintptr_t bxor = REBASE(0x5504FF0);
        const uintptr_t byteswap = REBASE(0x5505C20);
        const uintptr_t countlz = REBASE(0x5505990);
        const uintptr_t countrz = REBASE(0x5505AE0);
        const uintptr_t extract = REBASE(0x5505790);
        const uintptr_t lrotate = REBASE(0x55055C0);
        const uintptr_t lshift = REBASE(0x5505180);
        const uintptr_t replace = REBASE(0x5505850);
        const uintptr_t rrotate = REBASE(0x5505640);
        const uintptr_t rshift = REBASE(0x55052A0);
    }

    namespace Utf8Lib
    {
        const uintptr_t codepoint = REBASE(0x54E7D30);
        const uintptr_t codes = REBASE(0x54E8DB0);
        const uintptr_t offset = REBASE(0x54E8860);
        const uintptr_t char_ = REBASE(0x54E80D0);
        const uintptr_t len = REBASE(0x54E7A50);
    }

    namespace CoroutineLib
    {
        const uintptr_t close_ = REBASE(0x55038D0);
        const uintptr_t isyieldable = REBASE(0x5503850);
        const uintptr_t running = REBASE(0x55037E0);
        const uintptr_t status = REBASE(0x55018E0);
        const uintptr_t wrap = REBASE(0x5503500);
        const uintptr_t yield = REBASE(0x5503780);
        const uintptr_t create = REBASE(0x5502F50);
        // resume Not found
    }

    namespace BufferLib
    {
        const uintptr_t fromstring = REBASE(0x54FCED0);
        const uintptr_t readbits = REBASE(0x54FE6E0);
        const uintptr_t readf32 = REBASE(0x54FF4A0);
        const uintptr_t readf64 = REBASE(0x54FF600);
        const uintptr_t readi16 = REBASE(0x54FEF20);
        const uintptr_t readi32 = REBASE(0x54FF1E0);
        const uintptr_t readi8 = REBASE(0x54FEC60);
        const uintptr_t readinteger = REBASE(0x54FD520);
        const uintptr_t readstring = REBASE(0x54FD770);
        const uintptr_t readu16 = REBASE(0x54FF080);
        const uintptr_t readu32 = REBASE(0x54FF340);
        const uintptr_t readu8 = REBASE(0x54FEDC0);
        const uintptr_t writebits = REBASE(0x54FE920);
        const uintptr_t writef32 = REBASE(0x54FFBE0);
        const uintptr_t writef64 = REBASE(0x54FFD70);
        const uintptr_t writei16 = REBASE(0x54FF8E0);
        const uintptr_t writei32 = REBASE(0x54FFA60);
        const uintptr_t writei8 = REBASE(0x54FF760);
        const uintptr_t writeinteger = REBASE(0x54FD630);
        const uintptr_t writestring = REBASE(0x54FDE50);
        const uintptr_t writeu16 = REBASE(0x54FF8E0);
        const uintptr_t writeu32 = REBASE(0x54FFA60);
        const uintptr_t writeu8 = REBASE(0x54FF760);
        const uintptr_t copy = REBASE(0x54FE1A0);
        const uintptr_t fill = REBASE(0x54FE490);
        const uintptr_t len = REBASE(0x54FE0F0);
        const uintptr_t tostring = REBASE(0x54FCFA0);
        const uintptr_t create = REBASE(0x54FCE20);
    }

    namespace Task
    {
        const uintptr_t spawn = REBASE(0x41862F0);
        const uintptr_t defer = REBASE(0x4185E60);
        const uintptr_t delay = REBASE(0x4186660);
        const uintptr_t wait = REBASE(0x4186960);
        const uintptr_t cancel = REBASE(0x4186BD0);
        const uintptr_t synchronize = REBASE(0x4184E80);
        const uintptr_t desynchronize = REBASE(0x4185290);
    }

    namespace ExtraSpace
    {
        const uintptr_t RequireBypass = REBASE(0xA00); //?
        const uintptr_t IsCoreScript = REBASE(0x168);
        const uintptr_t LockViolationInstanceCrash = REBASE(0x8431DF0); //?
    }

    namespace Globals
    {
        const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6E83748); //?
        const uintptr_t IdentityPointer = REBASE(0x8050FF8);
    }

    namespace TaskScheduler
    {
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x8099188); //?
        const uintptr_t TaskSchedulerPointer = REBASE(0x8A44C10); 
        const uintptr_t JobStart = 0xC8;
        const uintptr_t JobName = 0x18;
    }

    namespace Raknet
    {
        const uintptr_t RaknetSend = REBASE(0x288FD90);
        const uintptr_t RaknetReceive = REBASE(0x2890380); //?
        const uintptr_t DeallocatePacket = REBASE(0x2890A20);
        const uintptr_t vtable = REBASE(0x6AD6D58);
    }

}

namespace Roblox
{
    inline auto Print = (uintptr_t(*)(int, const char*, ...))Offsets::Print;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetLuaStateForInstance = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetLuaStateForInstance;
    inline auto ScriptContextResume = (uint64_t(__fastcall*)(uint64_t, YieldState*, YieldingLuaThread**, uint32_t, uint8_t, uint64_t))Offsets::ScriptContextResume;
}
