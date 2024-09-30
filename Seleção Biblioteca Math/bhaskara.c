#include <stdio.h>
#include <math.h>

int main(){
    
    float a = 0, b = 0, c = 0, delta = 0;
    
    scanf("%f %f %f", &a, &b, &c);
    
    delta = pow(b,2)-4*a*c;
    
    if(delta > 0){
        printf("%.2f\n", (-b+sqrt(delta))/(2*a));
        printf("%.2f\n", (-b-sqrt(delta))/(2*a));
    } else if(delta < 0) printf("nao ha raiz real\n");
    else if(b != 0) printf("%.2f\n", (-b)/(2*a));
    else printf("0.00\n");  // Em c, é possível imprimir -0, por isso fiz um caso aparte
    
    return 0;
}