#pragma once
#include <cstdint>
#include <memory>

#define CommonHeader \
    uint8_t memcat; /* +0x0 */ \
    uint8_t tt;     /* +0x1 */ \
    uint8_t marked  /* +0x2 */

struct lua_State {
    CommonHeader;
    uint8_t status;               /* +0x03 */
    uint8_t activememcat;         /* +0x04 */
    bool singlestep;              /* +0x05 */
    bool isactive;                /* +0x06 */
    uint8_t _pad_0x07;            /* +0x07 */
    struct global_State* global;  /* +0x08 */
    TString* namecall;            /* +0x10 */
    StkId top;                    /* +0x18 */
    CallInfo* end_ci;             /* +0x20 */
    CallInfo* base_ci;            /* +0x28 */
    StkId stack;                  /* +0x30 */
    LSTATE_STACKSIZE_ENC<int> stacksize; /* +0x38 */
    int size_ci;                  /* +0x3C */
    GCObject* gclist;             /* +0x40 */
    LuaTable* gt;                 /* +0x48 */
    UpVal* openupval;             /* +0x50 */
    RobloxExtraSpace* userdata;   /* +0x58 */
    CallInfo* ci;                 /* +0x60 */
    StkId stack_last;             /* +0x68 */
    StkId base;                   /* +0x70 */
    unsigned short nCcalls;       /* +0x78 */
    unsigned short baseCcalls;    /* +0x7A */
    int cachedslot;               /* +0x7C */
};

typedef struct global_State {
    size_t GCthreshold;           /* +0x00 */
    size_t _totalbytes_old;       /* +0x08 */
    lua_Alloc _frealloc_old;      /* +0x10 */
    void* _ud_old;                /* +0x18 */
    int gcgoal;                   /* +0x20 */
    int gcstepmul;                /* +0x24 */
    int gcstepsize;               /* +0x28 */
    GCObject* gray;               /* +0x18 */
    GCObject* weak;               /* +0x20 */
    GCObject* grayagain;          /* +0x28 */
    size_t totalbytes;            /* +0x30 */
    lua_Alloc frealloc;           /* +0x38 */
    void* ud;                     /* +0x40 */
    char _pad_gc[0x08];           /* +0x48 */
    uint8_t currentwhite;         /* +0x48 */
    uint8_t gcstate;              /* +0x49 */
    char _pad_0x4A[0x06];         /* +0x4A */
    stringtable strt;             /* +0x50 */
    GCObject* _gray_rest[3];      /* +0x60 */
    struct lua_State* mainthread; /* +0x78 */
    lua_Callbacks cb;             /* +0x4E0 */
    size_t memcatbytes[LUA_MEMORY_CATEGORIES]; /* +0x2B80 */
} global_State;

struct RobloxExtraSpace {
    struct Shared {
        char Pad0[0x08];          /* +0x00 */
        void* ScriptContext;      /* +0x08 */
    };

    char Pad1[0x38];              /* +0x00 */
    Shared* SharedExtraSpace;     /* +0x40 */
    char Pad2[0x10];              /* +0x48 */
    uintptr_t Identity;           /* +0x58 */
    char Pad3[0x28];              /* +0x60 */
    std::weak_ptr<uintptr_t> Script; /* +0x88 */
};

typedef struct Proto {
    CommonHeader;
    uint8_t is_vararg;            /* +0x03 */
    uint8_t flags;                /* +0x04 */
    uint8_t nups;                 /* +0x05 */
    uint8_t numparams;            /* +0x06 */
    uint8_t maxstacksize;         /* +0x07 */
    const Instruction* codeentry; /* +0x08 */
    PROTO_SOURCE_ENC<TString*> source; /* +0x10 */
    PROTO_UPVALUES_ENC<TString**> upvalues; /* +0x18 */
    void* execdata;               /* +0x20 */
    uintptr_t exectarget;         /* +0x28 */
    PROTO_DEBUGNAME_ENC<TString*> debugname; /* +0x30 */
    PROTO_USERDATA_ENC<void*> userdata; /* +0x38 */
    PROTO_LOCVARS_ENC<struct LocVar*> locvars; /* +0x40 */
    GCObject* gclist;             /* +0x48 */
    PROTO_ABSLINEINFO_ENC<int*> abslineinfo; /* +0x50 */
    PROTO_LINEINFO_ENC<uint8_t*> lineinfo; /* +0x58 */
    TValue* k;                    /* +0x60 */
    Instruction* code;            /* +0x68 */
    PROTO_DEBUGINSN_ENC<uint8_t*> debuginsn; /* +0x70 */
    struct Proto** p;             /* +0x78 */
    PROTO_TYPEINFO_ENC<uint8_t*> typeinfo; /* +0x80 */
    int sizecode;                 /* +0x88 */
    int sizelocvars;              /* +0x8C */
    int sizek;                    /* +0x90 */
    int sizeupvalues;             /* +0x94 */
    int linegaplog2;              /* +0x98 */
    int linedefined;              /* +0x9C */
    int sizetypeinfo;             /* +0xA0 */
    int sizelineinfo;             /* +0xA4 */
    int sizep;                    /* +0xA8 */
    int bytecodeid;               /* +0xAC */
} Proto;

typedef struct Closure {
    CommonHeader;
    uint8_t isC;                  /* +0x03 */
    uint8_t preload;              /* +0x04 */
    uint8_t stacksize;            /* +0x05 */
    uint8_t nupvalues;            /* +0x06 */
    GCObject* gclist;             /* +0x08 */
    struct LuaTable* env;         /* +0x10 */
    union {
        struct {
            lua_CFunction f;      /* +0x18 */
            CLOSURE_DEBUGNAME_ENC<const char*> debugname; /* +0x20 */
            CLOSURE_CONT_ENC<lua_Continuation> cont; /* +0x28 */
            TValue upvals[1];     /* +0x30 */
        } c;
        struct {
            struct Proto* p;      /* +0x18 */
            TValue uprefs[1];     /* +0x20 */
        } l;
    };
} Closure;

typedef struct LuaTable {
    CommonHeader;
    uint8_t tmcache;              /* +0x03 */
    uint8_t safeenv;              /* +0x04 */
    uint8_t nodemask8;            /* +0x05 */
    uint8_t readonly;             /* +0x06 */
    uint8_t lsizenode;            /* +0x07 */
    int sizearray;                /* +0x08 */
    union {
        int lastfree;             /* +0x0C */
        int aboundary;            /* +0x0C */
    };
    struct LuaTable* metatable;   /* +0x10 */
    TValue* array;                /* +0x18 */
    LuaNode* node;                /* +0x20 */
    GCObject* gclist;             /* +0x28 */
} LuaTable;

typedef struct TString {
    CommonHeader;
    int16_t flag;                 /* +0x04 */
    int16_t atom;                 /* +0x06 */
    TString* next;                /* +0x08 */
    TSTRING_HASH_ENC<unsigned int> hash; /* +0x10 */
    unsigned int len;             /* +0x14 */
    char data[1];                 /* +0x18 */
} TString;

typedef struct CallInfo {
    StkId top;                    /* +0x00 */
    StkId func;                   /* +0x08 */
    StkId base;                   /* +0x10 */
    const Instruction* savedpc;   /* +0x18 */
    int nresults;                 /* +0x20 */
    unsigned int flags;           /* +0x24 */
} CallInfo;

typedef struct stringtable {
    TString** hash;               /* +0x00 */
    int size;                     /* +0x08 */
    uint32_t nuse;                /* +0x0C */
} stringtable;

struct lua_Page {
    lua_Page* listprev;           /* +0x00 */
    lua_Page* listnext;           /* +0x08 */
    lua_Page* prev;               /* +0x10 */
    lua_Page* next;               /* +0x18 */
    int pageSize;                 /* +0x20 */
    int blockSize;                /* +0x24 */
    void* freeList;               /* +0x28 */
    int freeNext;                 /* +0x30 */
    int busyBlocks;               /* +0x34 */
    char padding[sizeof(void*) == 8 ? 8 : 12]; /* +0x38 */
    char data[1];                 /* +0x40 */
};

struct lua_Callbacks {
    void* userdata;               /* +0x00 */
    void (*debuginterrupt)(lua_State* L, lua_Debug* ar); /* +0x08 */
    void (*onallocate)(lua_State* L, size_t osize, size_t nsize); /* +0x10 */
    void (*debugprotectederror)(lua_State* L); /* +0x18 */
    void (*debugbreak)(lua_State* L, lua_Debug* ar); /* +0x20 */
    void (*interrupt)(lua_State* L, int gc); /* +0x28 */
    void (*userthread)(lua_State* LP, lua_State* L); /* +0x30 */
    int16_t (*useratom)(lua_State* L, const char* s, size_t l); /* +0x38 */
    void (*debugstep)(lua_State* L, lua_Debug* ar); /* +0x40 */
    void (*panic)(lua_State* L, int errcode); /* +0x48 */
};
