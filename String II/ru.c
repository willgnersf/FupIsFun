#include <stdio.h>

void separarVogaisEConsoantes(char *str, char *v, char *c){
    
    int iV = 0, iC = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            v[iV++] = str[i];
        else if(str[i] != 32)
            c[iC++] = str[i];
            
    }
    
    v[iV] = '\0';
    c[iC] = '\0';
    
}

int main(){
    
    char frase[100], vogal[100], consoante[100];
    
    scanf("%[^\n]", frase);
    
    separarVogaisEConsoantes(frase, vogal, consoante);
    
    printf("%s\n%s\n", vogal, consoante);
    
    return 0;
}