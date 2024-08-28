#include <stdio.h>

char invCase(char l){

    if(l > 64 && l < 91)
        l += 32;
    else if(l > 96 && l < 123)
        l -= 32; 

    return l;
}

int main(){

    char carac;

    scanf("%c", &carac);

    carac = invCase(carac);

    printf("%c\n", carac);

}