// DLLForward by itisluiz v1.2.1.2
#pragma once
#include <cstdint>
#include <Windows.h>
#include "xorstr.hpp"

namespace dllforward
{
	namespace internal
	{
		struct Export
		{
			void(*method)();
			const char* name;
			const uint16_t ordinal;
			const uint32_t rva;
		};

#pragma optimize("", off)

		static volatile uint16_t volatileWord;
		static __declspec(noinline) void __CALL_DUMMY() { volatileWord = 0; }

		// Proxy header generated for version.dll (64 bit)
		static_assert(sizeof(void*) == 8, "The proxied DLL must match the architecture of the proxy DLL");

		// #1: GetFileVersionInfoA (GetFileVersionInfoA)
		void __EXPORT_DUMMY1()
		{
#pragma comment(linker, "/EXPORT:GetFileVersionInfoA=" __FUNCDNAME__ ",@1")
			__CALL_DUMMY();
			volatileWord = 1;
		}

		// #2: GetFileVersionInfoByHandle (GetFileVersionInfoByHandle)
		void __EXPORT_DUMMY2()
		{
#pragma comment(linker, "/EXPORT:GetFileVersionInfoByHandle=" __FUNCDNAME__ ",@2")
			__CALL_DUMMY();
			volatileWord = 2;
		}

		// #3: GetFileVersionInfoExA (GetFileVersionInfoExA)
		void __EXPORT_DUMMY3()
		{
#pragma comment(linker, "/EXPORT:GetFileVersionInfoExA=" __FUNCDNAME__ ",@3")
			__CALL_DUMMY();
			volatileWord = 3;
		}

		// #4: GetFileVersionInfoExW (GetFileVersionInfoExW)
		void __EXPORT_DUMMY4()
		{
#pragma comment(linker, "/EXPORT:GetFileVersionInfoExW=" __FUNCDNAME__ ",@4")
			__CALL_DUMMY();
			volatileWord = 4;
		}

		// #5: GetFileVersionInfoSizeA (GetFileVersionInfoSizeA)
		void __EXPORT_DUMMY5()
		{
#pragma comment(linker, "/EXPORT:GetFileVersionInfoSizeA=" __FUNCDNAME__ ",@5")
			__CALL_DUMMY();
			volatileWord = 5;
		}

		// #6: GetFileVersionInfoSizeExA (GetFileVersionInfoSizeExA)
		void __EXPORT_DUMMY6()
		{
#pragma comment(linker, "/EXPORT:GetFileVersionInfoSizeExA=" __FUNCDNAME__ ",@6")
			__CALL_DUMMY();
			volatileWord = 6;
		}

		// #7: GetFileVersionInfoSizeExW (GetFileVersionInfoSizeExW)
		void __EXPORT_DUMMY7()
		{
#pragma comment(linker, "/EXPORT:GetFileVersionInfoSizeExW=" __FUNCDNAME__ ",@7")
			__CALL_DUMMY();
			volatileWord = 7;
		}

		// #8: GetFileVersionInfoSizeW (GetFileVersionInfoSizeW)
		void __EXPORT_DUMMY8()
		{
#pragma comment(linker, "/EXPORT:GetFileVersionInfoSizeW=" __FUNCDNAME__ ",@8")
			__CALL_DUMMY();
			volatileWord = 8;
		}

		// #9: GetFileVersionInfoW (GetFileVersionInfoW)
		void __EXPORT_DUMMY9()
		{
#pragma comment(linker, "/EXPORT:GetFileVersionInfoW=" __FUNCDNAME__ ",@9")
			__CALL_DUMMY();
			volatileWord = 9;
		}

		// #10: VerFindFileA (VerFindFileA)
		void __EXPORT_DUMMY10()
		{
#pragma comment(linker, "/EXPORT:VerFindFileA=" __FUNCDNAME__ ",@10")
			__CALL_DUMMY();
			volatileWord = 10;
		}

		// #11: VerFindFileW (VerFindFileW)
		void __EXPORT_DUMMY11()
		{
#pragma comment(linker, "/EXPORT:VerFindFileW=" __FUNCDNAME__ ",@11")
			__CALL_DUMMY();
			volatileWord = 11;
		}

		// #12: VerInstallFileA (VerInstallFileA)
		void __EXPORT_DUMMY12()
		{
#pragma comment(linker, "/EXPORT:VerInstallFileA=" __FUNCDNAME__ ",@12")
			__CALL_DUMMY();
			volatileWord = 12;
		}

		// #13: VerInstallFileW (VerInstallFileW)
		void __EXPORT_DUMMY13()
		{
#pragma comment(linker, "/EXPORT:VerInstallFileW=" __FUNCDNAME__ ",@13")
			__CALL_DUMMY();
			volatileWord = 13;
		}

		// #14: VerLanguageNameA (VerLanguageNameA)
		void __EXPORT_DUMMY14()
		{
#pragma comment(linker, "/EXPORT:VerLanguageNameA=" __FUNCDNAME__ ",@14")
			__CALL_DUMMY();
			volatileWord = 14;
		}

		// #15: VerLanguageNameW (VerLanguageNameW)
		void __EXPORT_DUMMY15()
		{
#pragma comment(linker, "/EXPORT:VerLanguageNameW=" __FUNCDNAME__ ",@15")
			__CALL_DUMMY();
			volatileWord = 15;
		}

		// #16: VerQueryValueA (VerQueryValueA)
		void __EXPORT_DUMMY16()
		{
#pragma comment(linker, "/EXPORT:VerQueryValueA=" __FUNCDNAME__ ",@16")
			__CALL_DUMMY();
			volatileWord = 16;
		}

		// #17: VerQueryValueW (VerQueryValueW)
		void __EXPORT_DUMMY17()
		{
#pragma comment(linker, "/EXPORT:VerQueryValueW=" __FUNCDNAME__ ",@17")
			__CALL_DUMMY();
			volatileWord = 17;
		}

#pragma optimize("", on)

		constexpr Export exports[]{ { __EXPORT_DUMMY1, "GetFileVersionInfoA", 1, 0x1ee0 }, { __EXPORT_DUMMY2, "GetFileVersionInfoByHandle", 2, 0x23e0 }, { __EXPORT_DUMMY3, "GetFileVersionInfoExA", 3, 0x1f00 }, { __EXPORT_DUMMY4, "GetFileVersionInfoExW", 4, 0x1070 }, { __EXPORT_DUMMY5, "GetFileVersionInfoSizeA", 5, 0x1010 }, { __EXPORT_DUMMY6, "GetFileVersionInfoSizeExA", 6, 0x1f20 }, { __EXPORT_DUMMY7, "GetFileVersionInfoSizeExW", 7, 0x1090 }, { __EXPORT_DUMMY8, "GetFileVersionInfoSizeW", 8, 0x10b0 }, { __EXPORT_DUMMY9, "GetFileVersionInfoW", 9, 0x10d0 }, { __EXPORT_DUMMY10, "VerFindFileA", 10, 0x1f40 }, { __EXPORT_DUMMY11, "VerFindFileW", 11, 0x25a0 }, { __EXPORT_DUMMY12, "VerInstallFileA", 12, 0x1f60 }, { __EXPORT_DUMMY13, "VerInstallFileW", 13, 0x3390 }, { __EXPORT_DUMMY14, "VerLanguageNameA", 14, 0x506c }, { __EXPORT_DUMMY15, "VerLanguageNameW", 15, 0x5097 }, { __EXPORT_DUMMY16, "VerQueryValueA", 16, 0x1030 }, { __EXPORT_DUMMY17, "VerQueryValueW", 17, 0x1050 } };
	}

	static HMODULE setup()
	{
		HMODULE hProxiedDLL = LoadLibraryA(_XOR_("C:/Windows/System32/version.dll"));

		if (!hProxiedDLL)
			return NULL;

		for (const internal::Export& exportEntry : internal::exports)
		{
			// uintptr_t pProxiedMethod{ reinterpret_cast<uintptr_t>(hProxiedDLL) + exportEntry.rva };
			// uintptr_t pProxiedMethod{ reinterpret_cast<uintptr_t>(GetProcAddress(hProxiedDLL, MAKEINTRESOURCEA(exportEntry.ordinal))) };
			uintptr_t pProxiedMethod{ reinterpret_cast<uintptr_t>(GetProcAddress(hProxiedDLL, exportEntry.name)) };

			uintptr_t pProxyMethod{ reinterpret_cast<uintptr_t>(exportEntry.method) };

#ifdef _DEBUG
			if (*reinterpret_cast<uint8_t*>(pProxyMethod) == 0xE9)
			{
				int32_t offset{ *reinterpret_cast<int32_t*>(pProxyMethod + 1) };
				pProxyMethod += offset + 5;
			}
#endif

#ifdef _WIN64
			uint8_t opcodes[14]{ 0xFF, 0x25, 0x00, 0x00, 0x00, 0x00 };
			*reinterpret_cast<uintptr_t*>(opcodes + 6) = pProxiedMethod;
#else
			uint8_t opcodes[5]{ 0xE9 };
			*reinterpret_cast<uintptr_t*>(opcodes + 1) = pProxiedMethod - pProxyMethod - sizeof(opcodes);
#endif

			DWORD originalProtect, newProtect;
			uint8_t* pProxyMethodBytes{ reinterpret_cast<uint8_t*>(pProxyMethod) };
			VirtualProtect(pProxyMethodBytes, sizeof(opcodes), PAGE_EXECUTE_READWRITE, &originalProtect);
			memcpy_s(pProxyMethodBytes, sizeof(opcodes), opcodes, sizeof(opcodes));
			VirtualProtect(pProxyMethodBytes, sizeof(opcodes), originalProtect, &newProtect);
		}

		return hProxiedDLL;
	}
}
