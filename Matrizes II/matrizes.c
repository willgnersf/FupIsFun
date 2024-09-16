#include <stdio.h>
#include <stdlib.h>

void setMatriz(int **m, int nlin, int ncol){
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            scanf("%d", &m[i][j]);
    
}

void getMatriz(int **m, int nlin, int ncol){
    
    for(int i = 0; i < nlin; i++){
        printf("[ ");
        for(int j = 0; j < ncol; j++)
            printf("%d ", m[i][j]);
        printf("]\n");
    }
    
}

void somaMatriz(int **m1, int **m2, int nlin, int ncol, int **somaM){
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            somaM[i][j] = m1[i][j] + m2[i][j];
    
}

int main(){
    int nlin = 0, ncol = 0, **matrizA = NULL, **matrizB = NULL, **matrizS = NULL;
    
    scanf("%d %d", &nlin, &ncol);
    
    matrizA = (int **) malloc(nlin*sizeof(int *));
    if(matrizA){
        for(int i = 0; i < nlin; i++)
            matrizA[i] = (int *) malloc(ncol*sizeof(int));
    } else printf("Erro na alocação de memória");
    
    matrizB = (int **) malloc(nlin*sizeof(int *));
    if(matrizB){
        for(int i = 0; i < nlin; i++)
            matrizB[i] = (int *) malloc(ncol*sizeof(int));
    } else printf("Erro na alocação de memória");
    
    matrizS = (int **) malloc(nlin*sizeof(int *));
    if(matrizS){
        for(int i = 0; i < nlin; i++)
            matrizS[i] = (int *) malloc(ncol*sizeof(int));
    } else printf("Erro na alocação de memória");
    
    setMatriz(matrizA, nlin, ncol);
    setMatriz(matrizB, nlin, ncol);
    
    somaMatriz(matrizA, matrizB, nlin, ncol, matrizS);
    
    getMatriz(matrizS, nlin, ncol);
        
    return 0;
}