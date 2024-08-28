#include <stdio.h>

void inverterStr(char *str){

    int i = 0;

    for( ; str[i] != '\0'; i++);

    for( ; i > 0; i--)
        printf("%c", str[i-1]);
    

}

int main(){

    char str[100];

    scanf("%[^\n]", str);

    inverterStr(str);
    
    printf("\n");
    
    return 0;

}