#include <stdio.h>

char cifraV1(char c, int n){

    c += n;

    if( c > 122 )
        c -= 26;
    else if( c < 97)
        c += 26; 

    return c;

}

int main(){

    char c;
    int n = 0;

    scanf("%c %d", &c, &n);

    c = cifraV1(c, n);

    printf("%c\n", c);

    return 0;

}