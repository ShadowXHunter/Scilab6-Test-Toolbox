/*This C program finds the transpose of a given matrix*/
//Author: Hirokjyoti Dutta
//Mail: hjduttaxx@gmail.com

#include<stdio.h>
#include<stdlib.h>
#include "trans.h"
int trans(double *mat_tr, double *mat, int n, int m){
    int i, j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++){
            //[j][i] element of given matrix stored in [i][j] element of transpose matrix
            *((mat_tr + i*n) + j) = *((mat + j*m) + i);     
        }
    return 0;
}