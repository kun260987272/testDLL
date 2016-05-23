#pragma once

#ifdef TESTDLL
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

DLL_API int wu();