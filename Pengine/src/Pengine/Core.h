#pragma once

#ifdef PE_PLATFORM_WINDOWS
	#ifdef PE_BUILD_DLL
		#define PENGINE_API __declspec(dllexport)
	#else
		#define PENGINE_API __declspec(dllimport)
	#endif
#else
	#error PENGINE IS WINDOWS ONLY!
#endif
