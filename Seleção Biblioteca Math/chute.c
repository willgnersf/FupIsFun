#include <stdio.h>
#include <math.h>

int main(){
    
    double objeto = 0, chute1 = 0, chute2 = 0;
    
    scanf("%lf %lf %lf", &objeto, &chute1, &chute2);
    
    if(fabs(chute1 - objeto) < fabs(chute2 - objeto)) printf("primeiro\n");
    else if(fabs(chute1 - objeto) > fabs(chute2 - objeto)) printf("segundo\n");
    else printf("empate\n");
    
    return 0;
}