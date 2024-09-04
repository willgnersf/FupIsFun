#include <stdio.h>

void codificarFrase(char *str){
    
    for(int i = 0; str[i] != '\0'; i ++){
        
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            str[i] = 'v';
        else if(str[i] != 32)
            str[i] = 'c';

    }
    
}

int main(){
    
    char str[100];
    
    scanf("%[^\n]", str);
    
    codificarFrase(str);
    
    printf("%s\n", str);
    
    return 0;
    
}