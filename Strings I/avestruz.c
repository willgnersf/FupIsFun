#include <stdio.h>

int contChar(char c, char *str){

    int cont = 0;

    for(int i = 0; str[i] != '\0'; i++){

        if(str[i] == c || str[i] == c+32 || str[i] == c-32)
            cont++;

    }

    return cont;

}

int main(){

    char str[100], c;

    scanf("%[^\n] %c", str, &c);

    printf("%d\n", contChar(c, str));

    return 0;

}