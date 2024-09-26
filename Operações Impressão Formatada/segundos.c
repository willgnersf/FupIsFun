#include <stdio.h>

int main(){
    
    int seg = 0, min = 0, h = 0;
    
    scanf("%d", &seg);
    
    h = seg/3600;
    
    seg = seg%3600;
    
    min = seg/60;
    
    seg = seg%60;

    printf("%d:%d:%d\n", h, min, seg);
    
    return 0;
}