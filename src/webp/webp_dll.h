#ifndef WEBP_DLL_H_
#define WEBP_DLL_H_
#ifdef _USRDLL
#define WEBP_EXTERN(type) __declspec(dllexport) type
#endif
#endif