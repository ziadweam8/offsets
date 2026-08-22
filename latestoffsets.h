#pragma once

/*
  Zela Dumper 
   Made by king_okr, ziadweam8 & pibbly
   rbx version-ddf602d9cfe44005
   Time taken 38.36s
   Offsets found 158
   Date 2026-08-22 22:43:01

*/

#include <cstdint>
#include <Windows.h>

struct lua_State;
struct YieldState;
struct YieldingLuaThread;
struct DataModel;
struct TaskScheduler;

#define REBASE(Address) (Address + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))
// //? = may be wrong
namespace Offsets
{
    const uintptr_t Print = REBASE(0x92C340);
    const uintptr_t OpcodeLookupTable = REBASE(0x6B83740);
    const uintptr_t ScriptContextResume = REBASE(0x22BBA10);
    const uintptr_t GetLuaStateForInstance = REBASE(0x2219D10);
        const uintptr_t GetPropertyData = REBASE(0x589CEF0); //?
        const uintptr_t GetTLSPointer = REBASE(0x4170);

    namespace Luau
    {
        // Luau_Execute Not found
        const uintptr_t LuaO_NilObject = REBASE(0x610EFF8);
        const uintptr_t LuaH_DummyNode = REBASE(0x610EEB8);
        // luaT_Eventnames Not found
        const uintptr_t luaf_newproto = REBASE(0xB503F0);
        const uintptr_t freeobj = REBASE(0xB456E0);
        const uintptr_t luaF_freeproto = REBASE(0xB50AB0);
        const uintptr_t PushInstance = REBASE(0x222A6B0);
        // loadsafe Not found
        const uintptr_t ConnectionDisconnect = REBASE(0x2252430); //?
        // luaM_toobig Not found
        const uintptr_t luaL_typerrorL = REBASE(0xB32BF0);
        const uintptr_t luaL_argerrorL = REBASE(0xB33CE0);
    }

    namespace RemoteEvent //(credits ravage)
    {
        const uintptr_t FireClient = REBASE(0x50333B0);
        const uintptr_t FireServer = REBASE(0x5033210);
    }

    namespace Raycast
    {
        const uintptr_t RaycastBoundDesc = REBASE(0x82012A0);
        const uintptr_t RaycastBoundFn = 0x80; // this is HARDCODED
    }

    namespace LuaLib
    {
        const uintptr_t print = REBASE(0x485B860);
        const uintptr_t assert = REBASE(0x4860E60);
        const uintptr_t error = REBASE(0x485BCC0);
        const uintptr_t gcinfo = REBASE(0x485F770);
        const uintptr_t getfenv = REBASE(0x485D2C0);
        const uintptr_t getmetatable = REBASE(0x485C6F0);
        const uintptr_t next = REBASE(0x48603B0);
        const uintptr_t newproxy = REBASE(0x4861560);
        const uintptr_t rawequal = REBASE(0x485D5B0);
        const uintptr_t rawget = REBASE(0x485D6C0);
        const uintptr_t rawset = REBASE(0x485DC10);
        const uintptr_t rawlen = REBASE(0x485F6D0);
        const uintptr_t select = REBASE(0x4860F10);
        const uintptr_t setfenv = REBASE(0x485D380);
        const uintptr_t setmetatable = REBASE(0x485C870);
        const uintptr_t tonumber = REBASE(0x485B930);
        const uintptr_t tostring = REBASE(0x4861500);
        const uintptr_t type = REBASE(0x485F790);
        const uintptr_t typeof = REBASE(0x485FD90);
        // pcall Not found
    }

    namespace StringLib
    {
        const uintptr_t byte = REBASE(0x4869FA0);
        const uintptr_t find = REBASE(0x486BE40);
        const uintptr_t format = REBASE(0x486DD50);
        const uintptr_t gmatch = REBASE(0x486C230);
        const uintptr_t gsub = REBASE(0x486D740);
        const uintptr_t len = REBASE(0x4868A70);
        const uintptr_t lower = REBASE(0x48696F0);
        const uintptr_t match = REBASE(0x486BE50);
        const uintptr_t pack = REBASE(0x486F930);
        const uintptr_t packsize = REBASE(0x48702A0);
        const uintptr_t rep = REBASE(0x4869990);
        const uintptr_t reverse = REBASE(0x48695A0);
        const uintptr_t split = REBASE(0x486E380);
        const uintptr_t sub = REBASE(0x4868B20);
        const uintptr_t unpack = REBASE(0x4870610);
        const uintptr_t upper = REBASE(0x4869840);
        const uintptr_t char_ = REBASE(0x486A230);
    }

    namespace TableLib
    {
        const uintptr_t clear = REBASE(0x4858080);
        const uintptr_t clone = REBASE(0x48582D0);
        const uintptr_t concat = REBASE(0x4855180);
        const uintptr_t create = REBASE(0x48573B0);
        const uintptr_t foreach = REBASE(0x4851580);
        const uintptr_t foreachi = REBASE(0x48508D0);
        const uintptr_t freeze = REBASE(0x48580D0);
        const uintptr_t getn = REBASE(0x48528F0);
        const uintptr_t insert = REBASE(0x48539C0);
        const uintptr_t isfrozen = REBASE(0x4858220);
        const uintptr_t maxn = REBASE(0x4852630);
        const uintptr_t move = REBASE(0x4853F30);
        const uintptr_t remove = REBASE(0x4853BC0);
        const uintptr_t sort = REBASE(0x4857230);
        const uintptr_t pack = REBASE(0x48554A0);
        const uintptr_t unpack = REBASE(0x4855C80);
        const uintptr_t find = REBASE(0x4857B40);
    }

    namespace Bit32Lib
    {
        const uintptr_t arshift = REBASE(0x4881C20);
        const uintptr_t band = REBASE(0x4881690);
        const uintptr_t bnot = REBASE(0x4881940);
        const uintptr_t bor = REBASE(0x4881740);
        const uintptr_t btest = REBASE(0x48816C0);
        const uintptr_t bxor = REBASE(0x4881840);
        const uintptr_t byteswap = REBASE(0x4882480);
        const uintptr_t countlz = REBASE(0x48821E0);
        const uintptr_t countrz = REBASE(0x4882330);
        const uintptr_t extract = REBASE(0x4881FE0);
        const uintptr_t lrotate = REBASE(0x4881E10);
        const uintptr_t lshift = REBASE(0x48819D0);
        const uintptr_t replace = REBASE(0x48820A0);
        const uintptr_t rrotate = REBASE(0x4881E90);
        const uintptr_t rshift = REBASE(0x4881AF0);
    }

    namespace Utf8Lib
    {
        const uintptr_t codepoint = REBASE(0x4864A30);
        const uintptr_t codes = REBASE(0x4865AE0);
        const uintptr_t offset = REBASE(0x4865590);
        const uintptr_t char_ = REBASE(0x4864DD0);
        const uintptr_t len = REBASE(0x4864750);
    }

    namespace CoroutineLib
    {
        const uintptr_t close_ = REBASE(0x48801C0);
        const uintptr_t isyieldable = REBASE(0x4880130);
        const uintptr_t running = REBASE(0x48800C0);
        const uintptr_t status = REBASE(0x487E240);
        const uintptr_t wrap = REBASE(0x487FE00);
        const uintptr_t yield = REBASE(0x4880060);
        const uintptr_t create = REBASE(0x487F8B0);
        // resume Not found
    }

    namespace BufferLib
    {
        const uintptr_t fromstring = REBASE(0x48798F0);
        const uintptr_t readbits = REBASE(0x487B110);
        const uintptr_t readf32 = REBASE(0x487BED0);
        const uintptr_t readf64 = REBASE(0x487C040);
        const uintptr_t readi16 = REBASE(0x487B950);
        const uintptr_t readi32 = REBASE(0x487BC10);
        const uintptr_t readi8 = REBASE(0x487B690);
        const uintptr_t readinteger = REBASE(0x4879F50);
        const uintptr_t readstring = REBASE(0x487A1A0);
        const uintptr_t readu16 = REBASE(0x487BAB0);
        const uintptr_t readu32 = REBASE(0x487BD70);
        const uintptr_t readu8 = REBASE(0x487B7F0);
        const uintptr_t writebits = REBASE(0x487B350);
        const uintptr_t writef32 = REBASE(0x487C620);
        const uintptr_t writef64 = REBASE(0x487C7B0);
        const uintptr_t writei16 = REBASE(0x487C320);
        const uintptr_t writei32 = REBASE(0x487C4A0);
        const uintptr_t writei8 = REBASE(0x487C1A0);
        const uintptr_t writeinteger = REBASE(0x487A060);
        const uintptr_t writestring = REBASE(0x487A880);
        const uintptr_t writeu16 = REBASE(0x487C320);
        const uintptr_t writeu32 = REBASE(0x487C4A0);
        const uintptr_t writeu8 = REBASE(0x487C1A0);
        const uintptr_t copy = REBASE(0x487ABD0);
        const uintptr_t fill = REBASE(0x487AEC0);
        const uintptr_t len = REBASE(0x487AB20);
        const uintptr_t tostring = REBASE(0x48799C0);
        const uintptr_t create = REBASE(0x4879840);
    }

    namespace Task
    {
        const uintptr_t spawn = REBASE(0x23B5E10);
        const uintptr_t defer = REBASE(0x23B5980);
        const uintptr_t delay = REBASE(0x23B6180);
        const uintptr_t wait = REBASE(0x23B6480);
        const uintptr_t cancel = REBASE(0x23B66F0);
        const uintptr_t synchronize = REBASE(0x23B4960);
        const uintptr_t desynchronize = REBASE(0x23B4DE0);
    }

    namespace ExtraSpace
    {
        const uintptr_t RequireBypass = REBASE(0x898);
        const uintptr_t IsCoreScript = REBASE(0x168);
        const uintptr_t LockViolationInstanceCrash = REBASE(0x8226758);
    }

    namespace Globals
    {
        const uintptr_t WebSocketServiceEnableClientCreation = REBASE(0x6C9EEE8); //?
        const uintptr_t IdentityPtr = REBASE(0x7EEB448);
    }

    namespace TaskScheduler
    {
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x7EF44B8);
        const uintptr_t TaskSchedulerPointer = REBASE(0x88B64C0);
        const uintptr_t JobStart = 0xC8;
        const uintptr_t JobName = 0x18;
    }

    namespace Raknet
    {
        const uintptr_t RaknetSend = REBASE(0x49862A0);
        const uintptr_t RaknetReceive = REBASE(0x4986890);
        const uintptr_t DeallocatePacket = REBASE(0x4986F40);
        const uintptr_t vtable = REBASE(0x6A81DE8);
    }

    namespace Misc
    {
        const uintptr_t FireTouchInterest = REBASE(0x1E46C30); //?
    }
}

namespace Roblox
{
    inline auto Print = (uintptr_t(*)(int, const char*, ...))Offsets::Print;
    inline auto Luau_Execute = (void(__fastcall*)(lua_State*))Offsets::Luau::Luau_Execute;
    inline auto GetLuaStateForInstance = (lua_State*(__fastcall*)(uint64_t, uint64_t*, uint64_t*))Offsets::GetLuaStateForInstance;
    inline auto ScriptContextResume = (uint64_t(__fastcall*)(uint64_t, YieldState*, YieldingLuaThread**, uint32_t, uint8_t, uint64_t))Offsets::ScriptContextResume;
}
