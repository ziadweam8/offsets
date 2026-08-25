// some stuff may be wrong so ill recheck after luau 0.736 gets pushed
// for old 37...
#define PROTO_LINEINFO_ENC VMValue3 
#define PROTO_ABSLINEINFO_ENC VMValue1 
#define PROTO_LOCVARS_ENC VMValue3 
#define PROTO_UPVALUES_ENC VMValue4 
#define PROTO_SOURCE_ENC VMValue1 
#define PROTO_DEBUGINSN_ENC VMValue1 
#define PROTO_DEBUGNAME_ENC VMValue2  
#define PROTO_TYPEINFO_ENC VMValue2 
#define LSTATE_STACKSIZE_ENC VMValue4 
#define CLOSURE_CONT_ENC VMValue3 
#define CLOSURE_DEBUGNAME_ENC VMValue2 // deprecated -- in this dump i might have got it wrong
#define UDATA_META_ENC VMValue4
#define TSTRING_HASH_ENC VMValue3 

// proto userdata is missing apologies
