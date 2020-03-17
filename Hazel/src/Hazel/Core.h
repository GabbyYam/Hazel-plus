#pragma once
#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HZ_API __declspec(dllexport)
	#else
		#define HZ_API __declspec(dllimport)
#endif // HZ_BUILD_DLL
#else
	#error Hazel only support windows!

#endif // HZ_PLATFROM_WINDOWS
