#include <stdio.h>

int main(){
    
    double a = 0, g = 0, rA = 0, rG = 0;
    
    scanf("%lf %lf %lf %lf", &a, &g, &rA, &rG);
    
    if(a/rA >= g/rG) printf("G\n");
    else printf("A\n");
    
    
    return 0;
}