#include <stdio.h>
#define T 10
int main (){
    int v[T], i , maior, pos;
    printf("digite %d valores para o vetor: \n", T);
    for(i=0; i<T; i++){
        printf("%do: ", i+1);
        scanf("%d", &v[i]);
    }
    maior = v[0];
    for(i=1; i<T; i++){
        if(v[i] > maior){
            maior = v[i];
            pos = i;
        }
    }
    printf("\n Maior elemento = %d na posicao %d\n", maior, pos+1);
}