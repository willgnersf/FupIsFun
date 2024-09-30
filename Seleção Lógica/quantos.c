#include <stdio.h>

int main(){
    
    int num1 = 0, num2 = 0, num3 = 0, cont = 0;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1 == num2) {
        cont += 2;
        if(num1 == num3) cont++;
    } 
    else if(num2 == num3) cont += 2;
    else if(num1 == num3) cont += 2;
    
    printf("%d\n", cont);
    
    return 0;
}