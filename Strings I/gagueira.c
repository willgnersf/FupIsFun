#include <stdio.h>

void gago(char *nome, char *nomeG){
    
    int c = 0;
    
    for(int i = 0; nome[i] != '\0'; ){
        int start = i;
        
        while(nome[i] != ' ' && nome[i] != '\0') i++;
     
        for(int a = 0; a < 2; a++){
            
            for(int d = start ; d < i; d++)
                nomeG[c++] = nome[d];
            if(nome[i] == ' ' || nome[i] == '\0' && a == 0)
                nomeG[c++] = ' ';
        }
        
        if(nome[i] == ' '){
            nomeG[c] = ' ';
            i++;
        }
    }
    
    nomeG[c] = '\0';
    
}

int main(){
    
    char nome[100], nomeG[100];
    
    scanf("%[^\n]", nome);
    
    gago(nome, nomeG);
    
    printf("%s\n", nomeG);
    
    return 0;
}