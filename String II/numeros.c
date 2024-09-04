#include <stdio.h>

int somarTodosNumeros(char *str){
    
    int soma = 0, num = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        
        num = 0;
        
        while((str[i] - '0') < 10 && (str[i] - '0') > 0){
            
            num *= 10;
            
            num += str[i] - '0';
            
            if((str[i+1] - '0') > 10 || (str[i+1] - '0') <= 0)
                soma += num;
            
            i++;
            
        }
        
        
    }
    
    return soma;
    
}

int main(){
    
    char str[100];

    scanf("%[^\n]", str);

    printf("%d\n", somarTodosNumeros(str));
    
    return 0;
    
}