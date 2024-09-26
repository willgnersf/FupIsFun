#include <stdio.h>
#include <math.h>

int main(){
    
    double xA = 0, yA = 0, xB = 0, yB = 0;
    float distancia = 0;
    
    scanf("%lf %lf %lf %lf", &xA, &yA, &xB, &yB);
    
    distancia = sqrt(pow(xB-xA,2)+pow(yB-yA,2));
    
    printf("%.2f\n", distancia);
    
    return 0;
}