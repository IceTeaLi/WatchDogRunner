#pragma once
#include <Windows.h>
#include <vector>

using std::vector;

namespace hook
{
	class Inject
	{
	public:
		virtual bool DoInject() = 0;
		virtual bool StopInject() = 0;

	};

	class MsgInject :public Inject
	{
	public:
		typedef bool(*SetHook)(const DWORD& dwThreadID, const DWORD& msg_id);
		typedef bool(*UnHook)(const DWORD& msg_id);

		MsgInject(const DWORD&,const DWORD&);
		MsgInject(const DWORD&, const vector<DWORD>&);
		~MsgInject();

		virtual bool DoInject() override;
		virtual bool StopInject() override;

	private:
		const DWORD single_msg_id;
		const DWORD tid;
		const vector<DWORD> msg_id_vec;

		const HMODULE module;

		SetHook SetMsgHook;
		UnHook UnMsgHook;

		inline bool IsHookSingleMsg()const
		{
			if (single_msg_id == -1)
				return false;
			return true;
		}
	};
}