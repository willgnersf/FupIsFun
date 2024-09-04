#include <stdio.h>

int contSubStr(char *str, char *subStr){
    
    int cont = 0;
    
    for(int i = 0, a = 0; str[i] != '\0'; i++){
        
        while(str[i] == subStr[a] && subStr[a] != '\0'){
            a++;
            i++;
            if(subStr[a] == '\0')
                cont++;
            
        }
        a = 0;
    }
    
    return cont;
    
}

int main(){
    
    char str[100], subStr[100];
    int cont = 0;
    
    scanf("%[^\n] %[^\n]", str, subStr);
    
    cont = contSubStr(str, subStr);
    
    printf("%d\n", cont);
    
    return 0;
    
}