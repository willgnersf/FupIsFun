#include <stdio.h>

int main(){
    
    float item1 = 0, item2 = 0, item3 = 0;
    float valor1 = 0, valor2 = 0, valor3 = 0;
    float dinheiro = 0, restante = 0;
    
    scanf("%f %f %f", &item1, &item2, &item3);
    
    scanf("%f %f %f", &valor1, &valor2, &valor3);
    
    scanf("%f", &dinheiro);
    
    restante = dinheiro - (item1*valor1) - (item2*valor2) - (item3*valor3);
    
    printf("%.2f\n", restante);
    
    return 0;
}