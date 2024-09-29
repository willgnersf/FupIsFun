#include <stdio.h>

int main(){
    
    int lado1 = 0, lado2 = 0, lado3 = 0, isTriangulo = 1;
    
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    
    if(lado1 >= (lado2 + lado3)) isTriangulo = 0;
    else if(lado2 >= (lado1 + lado3)) isTriangulo = 0;
    else if(lado3 >= (lado1 + lado2)) isTriangulo = 0;
    
    if(isTriangulo) printf("True\n");
    else printf("False\n");
    
    return 0;
}