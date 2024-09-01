#include <stdio.h>

typedef struct{
    
    int soma;
    int sub;
    float divisao;
    int multip;
    
} EXPRESSAO;

EXPRESSAO setExpressao(int n1, int n2){
    
    EXPRESSAO aux;
    
    aux.soma = n1 + n2;
    aux.sub = n1 - n2;
    aux.divisao = (float)n1/(float)n2;
    aux.multip = n1 * n2;
    
    return aux;
    
}

void getExpressao(EXPRESSAO expr){
    
    printf("%d %d %.1f %d\n", expr.soma, expr.sub, expr.divisao, expr.multip);
    
}

int main(){
    
    EXPRESSAO expr;
    int n1 = 0, n2 = 0;
    
    scanf("%d %d", &n1, &n2);
    
    expr = setExpressao(n1, n2);
    
    getExpressao(expr);
    
    return 0;
}