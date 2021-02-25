#include<Scierror.h>
#include<api_scilab.h>
#include <stdio.h>
#include "localization.h"


static const char fname[] = "transpose";
int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)
{
    int row, col, size = 0;
    double* mat = NULL; 
    double* mat_tr = NULL;

    if(nin != 1)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

    if (scilab_isDouble(env, in[0]) == 0 || scilab_isMatrix2d(env, in[0]) == 0 || scilab_isComplex(env, in[0]) == 1)
    {
        Scierror(999, _("%s: Wrong type for input argument #%d: A scalar expected.\n"), fname, 1);
        return 1;
    }

    size = scilab_getDim2d(env, in[0], &row, &col);
    scilab_getDoubleArray(env, in[0], &mat);
    out[0] = scilab_createDoubleMatrix2d(env, col, row, 0);
    scilab_getDoubleArray(env, out[0], &mat_tr);
    trans(mat_tr, mat, row, col);
    return 0;
}

int trans(double *mat_tr, double *mat, int n, int m){
    int i, j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++){
            *((mat_tr + j*m) + i) = *((mat + i*n) + j);     
        }
    return 0;
}
