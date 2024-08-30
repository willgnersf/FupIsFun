#include <stdio.h>

void caseInv(char *str,char *strCase){
    
    int i = 0;
    
    for(; str[i] != '\0'; i++){
        
        if(str[i] > 96 && str[i] < 123)
            strCase[i] = str[i] - 32;
        else if(str[i] > 64 && str[i] < 91)
            strCase[i] = str[i] + 32;
        else
            strCase[i] = str[i];
            
    }
    
    strCase[i] = '\0';
    
}

int main(){
    
    char str[100], strCase[100];
    
    scanf("%[^\n]", str);
    
    caseInv(str, strCase);
    
    printf("%s\n", strCase);
    
    return 0;
    
}