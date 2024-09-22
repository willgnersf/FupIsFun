#include <stdio.h>
#include <stdlib.h>

void setMatriz(int **m, int tam){
    
    for(int i = 0; i < tam; i++)
        for(int j = 0; j < tam; j++)
            scanf("%d", &m[i][j]);
    
}

int torre(int **m, int tam){
    
    int somaCol[tam], somaLin[tam], maior = 0, soma = 0;
    
    for(int i = 0; i < tam; i++){
        
        somaLin[i] = 0;
        somaCol[i] = 0;
        
        for(int j = 0; j < tam; j++){
            
            somaLin[i] += m[i][j];
            somaCol[i] += m[j][i];
            
        }
    }
    
    for(int i = 0; i < tam; i++){
        soma = 0;   
        for(int j = 0; j < tam; j++){
            
            soma = (somaLin[i] + somaCol[j]) - (2*m[i][j]);
            
            if(maior < soma)
                maior = soma;
            
        }
    }
    
    return maior;
    
}

int main(){
    
    int tam = 0, **m = NULL;
    
    scanf("%d", &tam);
    
    m = (int **) malloc(tam*sizeof(int *));
    if(m){
        for(int i = 0; i < tam; i++)
            m[i] = (int *) malloc(tam*sizeof(int));
    } else printf("Erro na alocação de memória");
    
    setMatriz(m, tam);
    
    printf("%d\n", torre(m, tam));
    
    
    return 0;
}
