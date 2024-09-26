#include <stdio.h>

int main(){
    
    int n1 = 0, n2 = 0, resultado = 0;;
    char op = 0;
    
    scanf("%d %d %c", &n1, &n2, &op);
    
    switch(op){
        case '+':
            resultado = n1 + n2;
            break;
        case '-':
            resultado = n1 - n2;
            break;
        case '*':
            resultado = n1*n2;
            break;
        case '/':
            resultado = n1/n2;
            break;
        default:
            resultado = 0;
    }
    
    printf("%d\n", resultado);
    
    return 0;
}