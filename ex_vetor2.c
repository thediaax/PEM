//ler um vetor, encontrar o menor valor, exibir e contar quantas ocorrencias existem no vetor
#include <stdio.h>
#define T 10
int main(){
    int i, menor, v[T], pos = 0;
    printf("digite %d valores para o vetor\n", T);
    for (i=0; i < T; i++) {
        printf("%do: ", i+1);
        scanf("%d", &v[i]);
    }

    menor = v[0];
    for (i=1; i<T; i++) {
        if(v[i] < menor){
            menor = v[i];
            pos = i;
        }
    }


printf("\no menor valor e %d na posicao %d", menor, pos+1);


    return 0;
}