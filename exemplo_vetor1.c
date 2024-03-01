#include <stdio.h>
int main(){
    int i;
    int v[10];

    // printf("digite o valor da posicao %d", i);
    // scanf("%d", &v[i]);
    // i++;

    // printf("digite o valor da posicao %d", i);
    // scanf("%d", &v[i]);
    // i++;

    // printf("digite o valor da posicao %d: ", i);
    // scanf("%d", &v[i]);
    // i++;

    for(i=0;i<10; i++){
        printf("digite o valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }
    for (i=0; i < 10; i++)
    {
        printf("posicao: %d, valor: %d\n", i, v[i]);
    }
    

    return 0;
}