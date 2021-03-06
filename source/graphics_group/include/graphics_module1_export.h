#ifndef _GRAPHICS_MODULE1_EXPORT_H_
#define _GRAPHICS_MODULE1_EXPORT_H_

#ifdef ZS_PLATFORM_WINDOWS
	#ifdef DLL_GRAPHICS_MODULE1_EXPORTS
		#define GRAPHICS_MODULE1_EXPORT	__declspec(dllexport) 
	#elif defined STATIC_GRAPHICS_MODULE1_EXPORTS
		#define GRAPHICS_MODULE1_EXPORT
	#else
		#define GRAPHICS_MODULE1_EXPORT __declspec(dllimport)
	#endif
#elif defined ZS_PLATFORM_MAC
	#define GRAPHICS_MODULE1_EXPORT
#else
	#define GRAPHICS_MODULE1_EXPORT
#endif

#endif //_GRAPHICS_MODULE1_EXPORT_H_