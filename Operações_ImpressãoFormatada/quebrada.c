#include <stdio.h>

int main(){

    float n1 = 0, n2 = 0;

    scanf("%f %f", &n1, &n2);

    printf("%.0f\n", n1/n2);
    printf("%d\n", ((int)n1)%((int)n2));
    printf("%.2f", n1/n2);

    return 0;
}