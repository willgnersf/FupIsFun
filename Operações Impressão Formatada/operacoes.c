#include <stdio.h>

int main(){

    int n1 = 0, n2 = 0;

    scanf("%d%d", &n1, &n2);

    printf("%d\n%d\n%d\n%.2f\n%d\n", n1+n2, n1-n2,n1*n2,(float)n1/(float)n2, n1%n2);

    return 0;
    
}