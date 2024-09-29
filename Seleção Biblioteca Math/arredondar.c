#include <stdio.h>
#include <math.h>

int main(){
    
    float nota = 0;
    char funcao = 0;
    
    scanf("%c %f", &funcao, &nota);
    
    if(funcao == 'r') printf("%.0lf\n", round(nota));
    else if(funcao == 'f') printf("%.0lf\n", floor(nota));
    else if(funcao == 'c') printf("%.0lf\n", ceil(nota));
    
    return 0;
}