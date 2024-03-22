#include <stdio.h>
int main(){
    int i=10, *pi;
    float f = 0.75, *pf;

    // printf("tamanho do inteiro: %d\n", sizeof(i));
    // printf("tamanho do ponteiro do inteiro: %d\n", sizeof(pi));
    // printf("tamanho do float: %d\n", sizeof(f));
    // printf("tamanho do ponteiro de float: %d", sizeof(pf));

    pi = &i;
    
    printf("endereco do i: %p\n", &i);
    printf("conteudo da variavel pi: %p\n", pi);
    printf("conteudo apontado por pi: %d\n", *pi);
    printf("endereco do pi: %p\n\n\n", &pi);


    pf = &f;

    printf("endereco do f: %p\n", &f);
    printf("conteudo da variavel pf: %p\n", pf);
    printf("conteudo apontado por pf: %f\n", *pf);
    printf("endereco do pf: %p\n", &pf);
    return 0;
}