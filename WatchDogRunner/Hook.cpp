#include "Hook.h"


hook::MsgInject::MsgInject(const DWORD& tid, const DWORD& msg_id)
	:tid(tid)
	,single_msg_id(msg_id)
	, module(LoadLibrary(L"MsgHookDLL.dll"))
{
	SetMsgHook = (SetHook)GetProcAddress(module, "SetHook");
	UnMsgHook = (UnHook)GetProcAddress(module, "UnHook");
}


hook::MsgInject::MsgInject(const DWORD& tid, const vector<DWORD>& vec)
	:tid(tid)
	,msg_id_vec(vec)
	,single_msg_id(-1)
	, module(LoadLibrary(L"MsgHookDLL.dll"))
{
	SetMsgHook = (SetHook)GetProcAddress(module, "SetHook");
	UnMsgHook = (UnHook)GetProcAddress(module, "UnHook");
}

hook::MsgInject::~MsgInject()
{
}

bool hook::MsgInject::DoInject()
{
	if (SetMsgHook == NULL || UnMsgHook == NULL)
		return false;
	if (IsHookSingleMsg())
	{
		return SetMsgHook(tid, single_msg_id);
	}
	else {
		for (auto c : msg_id_vec)
		{
			if (!SetMsgHook(tid, c))
			{
				throw - 1;
			}
		}
	}
	return false;
}

bool hook::MsgInject::StopInject()
{
	if (IsHookSingleMsg())
		return UnMsgHook(single_msg_id);
	for (auto c : msg_id_vec)
	{
		UnMsgHook(c);
	}
	return true;
}
