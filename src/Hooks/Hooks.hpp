/* This file is part of nSkinz by namazso, licensed under the MIT license:
*
* MIT License
*
* Copyright (c) namazso 2018
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/
#pragma once
#include "../SDK.hpp"

namespace hooks
{
	struct IBaseClientDLL_FrameStageNotify
	{
		using Fn = void __fastcall(sdk::IBaseClientDLL * thisptr, void*, sdk::ClientFrameStage_t curStage);
		static Fn hooked;
		static Fn* m_original;
	};

	struct SFHudDeathNoticeAndBotStatus_FireGameEvent
	{
		using Fn = void __fastcall(void* thisptr, void*, sdk::IGameEvent* event);
		static Fn hooked;
		static Fn* m_original;
	};

	struct C_BaseViewModel_SetSequence {
		using Fn = void __fastcall(sdk::C_BaseViewModel* thisptr, void*, int nSequence);
		static Fn hooked;
		static Fn* m_original;
	};

	struct C_BaseAttributableItem_UpdateOnRemove
	{
		using Fn = void __fastcall(sdk::C_BaseAttributableItem* thisptr, void*);
		static Fn hooked;
		static Fn* m_original;
	};

	// NetVar Proxies

	//extern auto __cdecl modelindex_proxy_fn(const sdk::CRecvProxyData* proxy_data_const, void* entity, void* output) -> void;
	//extern auto __cdecl weapon_proxy_fn(const sdk::CRecvProxyData* proxy_data_const, void* entity, void* output) -> void;
	//extern auto __cdecl sequence_proxy_fn(const sdk::CRecvProxyData* proxy_data_const, void* entity, void* output) -> void;
}
