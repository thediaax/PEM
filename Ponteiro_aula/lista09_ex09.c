#include <stdio.h>
#include <stdlib.h>

int main(){

    float m[3][3];
    int i,j;
    float **p;
    
    
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%9X ", &m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //alocação dinamica
    p = (float**) malloc (3*sizeof(float*));
    for(i=0;i<3;i++) {
        p[i] = (float *) malloc (3 * sizeof(float));
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%9X ", &p[i][j]);
        }
    printf("\n");
    }
    return 0;
}