#include <stdio.h>

int main(){
    
    int a = 0, b = 0, c = 0;
    int h = 0, l = 0;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);
    
    if(a <= h && (c <= l || b <= l)) printf("S\n");
    else printf("N\n");
    
    return 0;
}