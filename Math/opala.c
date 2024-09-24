#include <stdio.h>
#include <math.h>

int main(){
    
    float velocidade = 0, tempo = 0, consumo = 0, distancia = 0;
    float desempenho = 0;
    
    scanf("%f %f %f", &velocidade, &tempo, &consumo);
    
    tempo = tempo/60;
    
    distancia = velocidade*tempo;
    
    desempenho =  distancia / consumo ;
    
    printf("%.2f\n",desempenho );
    
    return 0;
}