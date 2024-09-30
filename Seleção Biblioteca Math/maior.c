#include <stdio.h>
#include <math.h>

int main(){
    
    double objeto = 0, chute1 = 0;
    char chute2;
    scanf("%lf %c %lf", &chute1, &chute2, &objeto);
    
    if(chute2 == 'm' && chute1 > objeto) printf("segundo\n");
    else if(chute2 == 'M' && chute1 < objeto) printf("segundo\n");
    else printf("primeiro\n");
    
    return 0;
}