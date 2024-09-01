#include <stdio.h>

typedef struct {
    
    char nome[100];
    int nota;
    
} REST;

void setRest(REST *rest, int tam){
    
    for(int i = 0; i < tam; i++)
        scanf("%s %d", rest[i].nome, &(rest[i].nota));

}



void compRest(REST *rest, int tam){
    
    for(int i = 0; i < tam; i++){
        
        for(int a = 1; a < tam-i; a++){
            
            if(rest[a].nota > rest[a-1].nota){
                
                REST temp = rest[a];
                rest[a] = rest[a-1];
                rest[a-1] = temp;
                
            } else if(rest[a].nota == rest[a-1].nota){
                
                for(int b = 0; rest[a].nome[b] != '\0' || rest[a-1].nome[b] != '\0'; b++){
                    
                    if(rest[a].nome[b] < rest[a-1].nome[b]){
                        
                        REST temp = rest[a];
                        rest[a] = rest[a-1];
                        rest[a-1] = temp;
                        break;   
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    
    printf("%s\n", rest[0].nome);
    
}

int main(){
    
    int tam;
    
    scanf("%d", &tam);
    
    REST r[tam];
    
    setRest(r, tam);
    
    compRest(r, tam);
    
    return 0;
    
}