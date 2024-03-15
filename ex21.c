#include <stdio.h>
int main(){
    int i, n[15], media;

    for (i=1; i<=15 ; i++)
    {
        printf("insira a media do aluno %d:", i);
        scanf("%d", &n[i]);
        
    }
    printf("\n%d", n[15]);

    return 0;
}