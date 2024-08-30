#include <stdio.h>

void ascologicoP(char *nome){

    int c = 0, i = 0, b = 97;

    for(; nome[i] != '\0'; i++)   c += nome[i];
    
    for(;b < 123; b++){
        
        c += b;
        
        if(c%50 == 0){
            nome[i] = b;
            break;
        }
        
        c -= b;
        
    }
    
    if(nome[i] == b)
        nome[i+1] = '\0';
    else
        nome[0] = '1';

}

int main(){
    
    char nome[30];
    
    scanf("%s", nome);
    
    ascologicoP(nome);
    
    if(nome[0] == '1')
        printf("sem sorte\n");
    else
        printf("%s\n", nome);
    
    return 0;
}