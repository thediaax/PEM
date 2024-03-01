#include <stdio.h>
int main(){
int v[10], i, soma;

    for (i = 0; i<10; i++)
    {
        printf("digite o valor para a posicao %d: ", i);
        scanf("%d", &v[i]);
    }
    for ( i = 0, soma = 0; i <10 ; i++)
    {
        soma = soma + v[i];
    }
        printf("\n soma = %d\n", soma);

    return 0;
}