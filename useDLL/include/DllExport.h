#ifndef _DLL_EXPOTR_H_
#define _DLL_EXPOTR_H_

	#ifdef DLL_EXPORT
		#define DLL_API __declspec(dllexport)
	#else
		#define DLL_API __declspec(dllimport)
	#endif

#endif