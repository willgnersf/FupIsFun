#include <stdio.h>

void formatar(char *str){
    
    int spaceIndex = 0, secondWordIndex = 0;
    
    for(; str[spaceIndex] != 32; spaceIndex++);
        
    secondWordIndex = spaceIndex;
        
    for(; str[secondWordIndex] == 32; secondWordIndex++);
    
    for(int i = spaceIndex+1, j = secondWordIndex; str[i] != '\0'; i++, j++)
        str[i] = str[j];
    
}

int main(){
    
    char frase[100];
    
    scanf("%[^\n]", frase);
    
    formatar(frase);
    
    printf("%s\n", frase);
    
    return 0;
}