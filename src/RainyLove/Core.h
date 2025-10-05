#pragma once

#ifdef RL_PLATFORM_WINDOWS
	#ifdef RL_BUILD_DLL
		#define RAINYLOVE_API __declspec(dllexport)
	#else
		#define RAINYLOVE_API __declspec(dllimport)
	#endif
#else
	#error RainyLove don't support this platform
#endif

