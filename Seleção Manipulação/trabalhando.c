#include <stdio.h>

int main(){
    
    int dia = 0, hora = 0;
    
    scanf("%d %d", &dia, &hora);
    
    if(dia > 1 && dia < 7){
        if((hora > 7 && hora < 12) || (hora > 13 && hora < 18)) printf("SIM\n");
        else printf("NAO\n");
    } else if(dia == 7){
        if(hora >= 8 && hora <= 11) printf("SIM\n");
        else printf("NAO\n");
    } else {
        printf("NAO\n");
    }
    
    
    return 0;
}  