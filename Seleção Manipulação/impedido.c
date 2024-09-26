#include <stdio.h>

int main(){
    
    int l = 0, r = 0, d = 0;
    
    scanf("%d %d %d", &l, &r, &d);
    
    if(r>l && r>50 && r>d) printf("S\n");
    else printf("N\n");
    
    return 0;
}