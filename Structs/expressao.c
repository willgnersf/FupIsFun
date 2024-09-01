#include <stdio.h>

typedef struct{
    int n1;
    int n2;
    char op;
} EXPRESSAO;

EXPRESSAO setExpressao(){
    
    EXPRESSAO aux;
    
    scanf("%d", &aux.n1);
    scanf("%d", &aux.n2);
    scanf(" %c", &aux.op);
    
    return aux;
    
}

int calculadora(EXPRESSAO aux){
    
    int r;
    
    switch(aux.op){
        case '+':
            r = aux.n1 + aux.n2;
            break;
        case '-':
            r = aux.n1 - aux.n2;
            break;
        case '*':
            r = aux.n1 * aux.n2;
            break;
        case '/':
            r = aux.n1 / aux.n2;
            break;
        default:
            r = 0;
            break;
    }
    
    return r;
    
}

int main(){
    
    EXPRESSAO expr;
    
    expr = setExpressao();
    
    printf("%d\n", calculadora(expr));
    
    return 0;
    
}