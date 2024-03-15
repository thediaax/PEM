#include <stdio.h>
int main(){
    int a=3, b=4, c=5;
    for(; a+b+c<1000; a++){
        for(b=a+1; a+b+c<1000; b++){
            for(c=b+1; a+b+c<1000; c++){
                if (a+b+c == 1000 && a*a + b*b == c*c){
                    printf("a= %d, b = %d, c = %d, soma = %d\n", a, b, c, a+b+c);
                    printf("a*a = %d, b*b = %d, c*c = %d\n", a * a, b * b, c * c);
                }
            }
        }
    }
    
    return 0;
}