#pragma once
#include <string>

// Auto reconstructed from vtable block @ 0x0005F500
// from "lua_shared.dylib", by VTableRec.idc
namespace VT
{
	class CLuaInterface;
	class CLuaStateInterface;
	class CBasePlayer;
}

// im half watching eh3x exploiting on some darkrp, so i keep fucking up.
class VT::CLuaInterface
{
public:
	virtual int	Top(void) = 0;	// 0
	virtual void*	Push(int) = 0;	// 1
	virtual void*	Pop(int) = 0;	// 2
	virtual void*	GetTable(int) = 0;	// 3
	virtual void*	GetField(int, char  const*) = 0;	// 4
	virtual void*	SetField(int, char  const*) = 0;	// 5
	virtual void*	CreateTable(void) = 0;	// 6
	virtual void*	SetTable(int) = 0;	// 7
	virtual void*	SetMetaTable(int) = 0;	// 8
	virtual void*	GetMetaTable(int) = 0;	// 9
	virtual void*	Call(int, int) = 0;	// 10
	virtual void*	PCall(int, int, int) = 0;	// 11
	virtual void*	Equal(int, int) = 0;	// 12
	virtual void*	RawEqual(int, int) = 0;	// 13
	virtual void*	Insert(int) = 0;	// 14
	virtual void*	Remove(int) = 0;	// 15
	virtual void*	Next(int) = 0;	// 16
	virtual void*	NewUserdata(unsigned int) = 0;	// 17
	virtual void*	ThrowError(char  const*) = 0;	// 18
	virtual void*	CheckType(int, int) = 0;	// 19
	virtual void*	ArgError(int, char  const*) = 0;	// 20
	virtual void*	RawGet(int) = 0;	// 21
	virtual void*	RawSet(int) = 0;	// 22
	virtual const char*	GetString(int, unsigned int *) = 0;	// 23
	virtual double	GetNumber(int) = 0;	// 24
	virtual bool	GetBool(int) = 0;	// 25
	virtual void *	GetCFunction(int) = 0;	// 26 // CFunc
	virtual void*	GetUserdata(int) = 0;	// 27
	virtual void	PushNil(void) = 0;	// 28
	virtual void	PushString(char  const*, unsigned int) = 0;	// 29
	virtual void	PushNumber(double) = 0;	// 30
	virtual void	PushBool(bool) = 0;	// 31
	virtual void	PushCFunction(void *) = 0;	// 32 // cFunc
	virtual void	PushCClosure(void*, int) = 0;	// 33 // cFunc
	virtual void	PushUserdata(void*) = 0;	// 34
	virtual int		ReferenceCreate(void) = 0;	// 35
	virtual void*	ReferenceFree(int) = 0;	// 36
	virtual void*	ReferencePush(int) = 0;	// 37
	virtual void*	PushSpecial(int) = 0;	// 38
	virtual void*	IsType(int, int) = 0;	// 39
	virtual void*	GetType(int) = 0;	// 40
	virtual void*	GetTypeName(int) = 0;	// 41
	virtual void*	CreateMetaTableType(char  const*, int) = 0;	// 42
	virtual const char*	CheckString(int) = 0;	// 43
	virtual double	CheckNumber(int) = 0;	// 44
	virtual void*	ObjLen(int) = 0;	// 45
	virtual void*	AddThreadedCall(void*) = 0;	// 46
	virtual void*	Init(void *, bool) = 0;	// 47
	virtual void*	Shutdown(void) = 0;	// 48
	virtual void*	Cycle(void) = 0;	// 49
	virtual void*	GetLuaState(void) = 0;	// 50 // lua_State
	virtual void*	Global(void) = 0;	// 51
	virtual void*	GetObject(int) = 0;	// 52
	virtual void*	DELETE_ME_5437(int) = 0;	// 53
	virtual void*	_DELETE_ME2466(int) = 0;	// 54
	virtual void*	PushLuaObject(void *) = 0;	// 55 // lua object
	virtual void*	PushLuaFunction(void) = 0;	// 56 // CFunc
	virtual void*	LuaError(char  const*, int) = 0;	// 57
	virtual void*	TypeError(char  const*, int) = 0;	// 58
	virtual void*	CallInternal(int, int) = 0;	// 59
	virtual void*	CallInternalNoReturns(int) = 0;	// 60
	virtual void*	CallInternalGetBool(int) = 0;	// 61
	virtual void*	CallInternalGetString(int) = 0;	// 62
	virtual void*	CallInternalGet(int, void *) = 0;	// 63 // LuaObject
	virtual void*	_DELETE_ME(void *, void *) = 0;	// 64 // LuaObject
	virtual void*	NewGlobalTable(char  const*) = 0;	// 65
	virtual void*	NewTemporaryObject(void) = 0;	// 66
	virtual void*	isUserData(int) = 0;	// 67
	virtual void*	GetMetaTableObject(char  const*, int) = 0;	// 68
	virtual void*	GetMetaTableObject(int) = 0;	// 69
	virtual void*	GetReturn(int) = 0;	// 70
	virtual void*	IsServer(void) = 0;	// 71
	virtual void*	IsClient(void) = 0;	// 72
	virtual void*	IsDedicatedServer(void) = 0;	// 73
	virtual void*	DestroyObject(void *) = 0;	// 74 // lua object
	virtual void*	CreateObject(void) = 0;	// 75
	virtual void*	SetMember(void *, void *, void *) = 0;	// 76 // luaobject for all 3
	virtual void*	GetNewTable(void) = 0;	// 77
	virtual void*	SetMember(void *, float) = 0;	// 78 // 4 below are ILuaObject
	virtual void*	SetMember(void *, float, void *) = 0;	// 79
	virtual void*	SetMember(void *, char  const*) = 0;	// 80
	virtual void*	SetMember(void *, char  const*, void *) = 0;	// 81
	virtual void*	SetIsServer(bool) = 0;	// 82
	virtual void*	PushLong(long) = 0;	// 83
	virtual void*	GetFlags(int) = 0;	// 84
	virtual void*	FindOnObjectsMetaTable(int, int) = 0;	// 85
	virtual void*	FindObjectOnTable(int, int) = 0;	// 86
	virtual void*	SetMemberFast(void *, int, int) = 0;	// 87 // luaobject
	virtual void*	RunString(char  const*, char  const*, char  const*, bool, bool) = 0;	// 88
	virtual void*	IsEqual(void *, void *) = 0;	// 89 // luaobject
	virtual void*	Error(char  const*) = 0;	// 90
	virtual void*	GetStringOrError(int) = 0;	// 91
	virtual void*	RunLuaModule(char  const*) = 0;	// 92
	virtual void*	FindAndRunScript(char  const*, bool, bool, char  const*) = 0;	// 93
	virtual void*	SetPathID(char  const*) = 0;	// 94
	virtual void*	GetPathID(void) = 0;	// 95
	virtual void*	ErrorNoHalt(char  const*, ...) = 0;	// 96
	virtual void*	Msg(char  const*, ...) = 0;	// 97
	virtual void*	PushPath(char  const*) = 0;	// 98
	virtual void*	PopPath(void) = 0;	// 99
	virtual void*	GetPath(void) = 0;	// 100
	virtual void*	GetColor(int) = 0;	// 101
	virtual void*	PushColor(int, int, int, int) = 0;	// 102
	virtual void*	GetStack(int, void *) = 0;	// 103
	virtual void*	GetInfo(char  const*, void *) = 0;	// 104
	virtual void*	GetLocal(void *, int) = 0;	// 105
	virtual void*	GetUpvalue(int, int) = 0;	// 106
	virtual void*	RunStringEx(char  const*, char  const*, char  const*, bool, bool, bool) = 0;	// 107
	virtual void*	DELETE_ME1(char  const*, int) = 0;	// 108
	virtual void*	GetDataString(int, void **) = 0;	// 109
	virtual void*	ErrorFromLua(char  const*, ...) = 0;	// 110
	virtual void*	GetCurrentLocation(void) = 0;	// 111
	virtual void*	MsgColour(void*, char  const*, ...) = 0;	// 112
	virtual void*	SetState(void *) = 0;	// 113 // lua_State
	virtual void*	DELETE_ME2(void) = 0;	// 114
	virtual void*	GetCurrentFile(std::string &) = 0;	// 115
	virtual void*	CompileString(void*, std::string  const&) = 0;	// 116
	virtual void*	ThreadLock(void) = 0;	// 117
	virtual void*	ThreadUnlock(void) = 0;	// 118
	virtual void*	CallFunctionProtected(int, int, bool) = 0;	// 119
	virtual void*	Require(char  const*) = 0;	// 120
	virtual void*	GetActualTypeName(int) = 0;	// 121
	virtual void*	SetupInfiniteLoopProtection(void) = 0;	// 122
};