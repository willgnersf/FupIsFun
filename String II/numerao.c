#include <stdio.h>

int somarImpares(char *str){
    
    int somaImpar = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] - 48 < 10 && (i+1)%2 != 0)
            somaImpar += str[i]-48;
            
    }
    
    return somaImpar;
}

int somarPares(char *str){
    
    int somaPar = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] - 48 < 10 && (i+1)%2 == 0)
            somaPar += str[i]-48;
            
    }
    
    return somaPar;
}

int divisivelOnze(char *str){
    int somaP = somarPares(str), somaI = somarImpares(str);
    
    if((somaP - somaI)%11 == 0 || (somaP - somaI) == 0)
        return 1;
    else
        return 0;
    
}

int main(){
    
    char numerao[20];
    
    scanf("%s", numerao);
    
    if(divisivelOnze(numerao))
        printf("sim\n");
    else
        printf("nao\n");
    
    return 0;
}