#include <stdio.h>
#include <math.h>

int main(){
    
    float a = 0, b = 0, c = 0;
    float p = 0, area = 0;
    
    scanf("%f %f %f", &a, &b, &c);
    
    p = (a+b+c)/2;
    
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    
    printf("%.2f\n", area);
    
    return 0;
}