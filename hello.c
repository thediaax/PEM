#include <stdio.h>

int main(){
int n, soma = 0;

printf("digite sua lista de valores e 0 encerra");
printf("primeiro: ");
scanf("%d", &n);
while (n){
    soma += n;
    printf("proximo: ");
    scanf("%d", &n);
    
}

printf("soma = %d\n", soma);
return 0;

}