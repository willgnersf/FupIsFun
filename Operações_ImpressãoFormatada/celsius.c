#include <stdio.h>

int main(){
    
    double temperatura = 0;
    
    scanf("%lf", &temperatura);
    
    temperatura = (1.8*temperatura)+32;
    
    printf("%lf\n", temperatura);
    
    return 0;
}