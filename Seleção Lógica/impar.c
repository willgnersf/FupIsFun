#include <stdio.h>

int main(){
    
    int p = 0, d1 = 0, d2 = 0;
    
    scanf("%d %d %d", &p, &d1, &d2);
    
    if((d1+d2)%2 == 0) printf("%d\n", p);
    else printf("%d\n", !p);
    
    return 0;
}