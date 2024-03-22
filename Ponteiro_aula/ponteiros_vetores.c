#include <stdio.h>
#include <stdlib.h>

int main(){
    //int v[1000000];
    int *v, i;
    printf("tamanho de v antes: %d\n", sizeof(v));

    v = (int *) malloc (10 * sizeof(int));
    printf("tamanho de v dps: %d\n", sizeof(v));
    printf("valor do v : %p\n", v);
    printf("valores nas posicoes do vetor\n");
    for(i=0;i<10;i++){

        printf("posicao :%p valor :%d \n", v+i, v[i]);
    }

    return 0;
}