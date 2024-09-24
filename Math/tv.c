#include <stdio.h>

int main(){
    
    float valor = 0, parcelas = 0;
    
    scanf("%f %f", &valor, &parcelas);
    
    valor = valor*((((parcelas-1)*5)/100)+1);
    
    printf("%.2f\n%.2f\n", valor/parcelas, valor);
    
    return 0;
}