#include <stdio.h>

typedef struct{
    
    char nome[100];
    int poder;
    
} PARTICIPANTE;

void setParticipante(PARTICIPANTE *aux, int tam){
    
    for(int i = 0; i < tam; i++){
        scanf(" %[^\n]", aux[i].nome);
        scanf("%d", &(aux[i].poder));
    }    
}

void sortParticipante(PARTICIPANTE *aux, int tam){
    
    for(int i = 0; i < tam; i++){
        
        for(int a = 1; a < tam-i; a++){
            
            if(aux[a].poder > aux[a-1].poder){
                
                PARTICIPANTE temp = aux[a-1];
                aux[a-1] = aux[a];
                aux[a] = temp;
                
            }
            
        }
        
    }
    
}

char guerra(PARTICIPANTE *c, PARTICIPANTE *h, int tamC, int tamH){
    
    int somaC = 0, somaH = 0;
    
    for(int i = 0; i < tamC; i++){
        somaC += c[i].poder;
    }
    
    for(int i = 0; i < tamH; i++)
        somaH += h[i].poder;
        
    if(somaC > somaH)
        return 'c';
    else if(somaH > somaC)
        return 'h';
    else
        return 'd';
        
    
}

char mChamp(PARTICIPANTE *c, PARTICIPANTE *h){
    
    if(c[0].poder > h[0].poder)
        return 'c';
    else
        return 'h';
    
}

int main(){
    
    int tamH = 0, tamC = 0;
    
    scanf("%d", &tamH);
    
    PARTICIPANTE homemFerro[tamH];
    
    setParticipante(homemFerro, tamH);
    
    sortParticipante(homemFerro, tamH);
    
    scanf("%d", &tamC);
    
    PARTICIPANTE capitaoAmerica[tamC];
    
    setParticipante(capitaoAmerica, tamC);
    
    sortParticipante(capitaoAmerica, tamC);
    
    if(guerra(capitaoAmerica, homemFerro, tamC, tamH) == 'c')
        printf("Team Captain Wins\n");
    else if(guerra(capitaoAmerica, homemFerro, tamC, tamH) == 'h')
        printf("Team Iron Wins\n");
    else
        printf("Draw\n");
        
    if(mChamp(capitaoAmerica, homemFerro) == 'c')
        printf("%s\n", capitaoAmerica[0].nome);
    else
        printf("%s\n", homemFerro[0].nome);
        
    return 0;
    
}