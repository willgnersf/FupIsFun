#include <stdio.h>

char criptoSoma(char c1, char c2, char op){
    
    if(op == '+'){
        c1 += c2 - 'a';
        if(c1 > 'z'){
            c1 -= 26;
        }
        
    } else if(op == '-'){
        c1 -= c2 - 'a';
        if(c1 < 'a'){
            c1 += 26;
        }
    }
    return c1;   
}

int main(){
    
    char letra1, letra2, operador;
    
    scanf("%c %c %c", &letra1, &operador, &letra2);
    
    printf("%c\n", criptoSoma(letra1, letra2, operador));
    
    return 0;
}