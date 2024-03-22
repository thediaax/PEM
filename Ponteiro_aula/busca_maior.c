#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, i,m1, m2, *v;

    printf("escolha o tamanho do vetor: ");
    scanf("%d", &t);
    v = (int *) malloc (t * sizeof(int));
    for(i=0;i<t;i++){
        printf("valor da posicao %d: ", i);
        scanf("%d", &v[i]);
    }
    printf("vetor digitado\n");
    for ( i = 0; i < t; i++)
    {
        printf("%d\n%d", v+i, &v[i]);
    }
    m1 = m2 = v[0];
    for( i=1; i<t; i++){
        if (v[i] > m2){
        m2=m1;
        m1 = v[i];
        }
        
    }
    printf("o rei %d\no principe %d\n", m1, m2);
    return 0;
}