#include <stdio.h>

int main(){
    
    int n1 = 0, n2 = 0;
    
    float media = 0;
    
    scanf("%d %d", &n1, &n2);
    
    media = ((float)n1+n2)/2.0;
    
    printf("%.1f\n", media);
    
    return 0;
}