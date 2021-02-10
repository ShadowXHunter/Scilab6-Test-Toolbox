/* main.c */
//Author: Hirokjyoti Dutta
//Mail: hjduttaxx@gmail.com

#include<stdio.h>
#include "trans.h"
int main(void)
{
	int i, j;
    double a[4][3] = {
        {1, 10, -5},
        {3, 0, 2},
        {11, -9, 16},
        {0, 2, 0}
    };
    double a_tr[3][4];      //transpose matrix
    
    //calling trans function
	trans((double *)a_tr, (double *)a, 4, 3);
    
    //displaying output
    printf("Transpose:\n");
    for(i=0; i<3; i++, printf("\n")) 
    for(j=0; j<4; j++)
    printf("%f ", a_tr[i][j]);
    return 0;
}
