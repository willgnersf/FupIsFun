#include <stdio.h>

int main(){
    
    int h = 0, min = 0, d = 0, m = 0, a = 0;
    
    scanf("%d %d %d %d %d", &h, &min, &d, &m, &a);
    
    printf("%.2d:%.2d %.2d/%.2d/%.2d\n", h, min, d, m, a%100);
    
    return 0;
}