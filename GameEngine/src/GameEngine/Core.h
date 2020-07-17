#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GAME_ENGINE_API __declspec(dllexport)
	#else
		#define GAME_ENGINE_API __declspec(dllimport)
	#endif // GE_BUILD_DLL
#else
	#error Game Engine  only supports Windows
#endif // GE_PLATFORM_WINDOWS
