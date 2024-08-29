#include <stdio.h>

void subString(char *str, char *subStr, int i, int f){

    for(int c = 0; i < f; c++){

        subStr[c] = str[i];

        if(i+1 == f)
            subStr[c+1] = '\0';
        i++;

    }
    
    

}

int main(){

    char str[100], subStr[100];
    int i = 0, f = 0;

    scanf("%[^\n] %d %d", str, &i, &f);

    subString(str, subStr, i , (f+i));

    printf("%s\n", subStr);

    return 0;
}