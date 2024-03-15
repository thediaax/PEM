#include <stdio.h>
#define ALUNOS 10
#define PROVAS 3
int main(){
    float boletim[ALUNOS][PROVAS];
    int i, j, menor, pos;
    int pior [PROVAS];

    for(i= 0; i<ALUNOS; i++){
        printf("digite as notas do aluno %d: \n", i+1);
        for(j=0;j<PROVAS; j++){
        scanf("%f\n", &boletim[i][j]);
        while(boletim[i][j] < 0 || boletim [i][j] > 10){
            printf("\nnota invalida\n");
            scanf("%f", &boletim[i][j]);
        }
        }
    }
    for(i=0; i<PROVAS; i++) pior[i]=0;
    for(i=0;i<ALUNOS;i++){
        menor = boletim[i][0];
        pos = 0;
        
        for(j=0; j<PROVAS; j++){
                if(boletim[i][j] < menor){
                    menor = boletim [i][j];
                    pos = j;
                }
        }
    }
    pior[pos]++;
    for(i=0; i<PROVAS;i++){
        printf("\n%d alunos tiveram a pior nota na P%d", pior[i], i+1);
    }
    return 0;
}