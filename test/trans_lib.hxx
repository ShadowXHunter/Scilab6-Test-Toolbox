#ifndef __TRANS_LIB_GW_HXX__
#define __TRANS_LIB_GW_HXX__

#ifdef _MSC_VER
#ifdef TRANS_LIB_GW_EXPORTS
#define TRANS_LIB_GW_IMPEXP __declspec(dllexport)
#else
#define TRANS_LIB_GW_IMPEXP __declspec(dllimport)
#endif
#else
#define TRANS_LIB_GW_IMPEXP
#endif

extern "C" TRANS_LIB_GW_IMPEXP int trans_lib(wchar_t* _pwstFuncName);



#endif /* __TRANS_LIB_GW_HXX__ */
