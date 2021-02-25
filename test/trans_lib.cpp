#include <wchar.h>
#include "trans_lib.hxx"
extern "C"
{
#include "trans_lib.h"
#include "addfunction.h"
}

#define MODULE_NAME L"trans_lib"

int trans_lib(wchar_t* _pwstFuncName)
{
    if(wcscmp(_pwstFuncName, L"transpose") == 0){ addCFunction(L"transpose", &sci_transpose, MODULE_NAME); }

    return 1;
}
