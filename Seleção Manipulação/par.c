// A descrição da atividade fala que é para printar "PAR" quando for impar, mas fazendo assim fica errado,
// da para ver pelos exemplos

#include <stdio.h>

int main(){
    
    int num = 0;
    
    scanf("%d", &num);
    
    if(num%2 == 0) printf("PAR\n");
    else printf("IMPAR\n");
    
    return 0;
}