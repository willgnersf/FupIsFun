#include <stdio.h>
#include <stdlib.h>

void setMatriz(int **m, int nlin, int ncol){
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            scanf("%d", &m[i][j]);
    
}

int isQuadradoMagico(int **m, int nlin, int ncol){
    
    int somaL[nlin], somaC[ncol], somaD[] = {0, 0};
    
    for(int i = 0, d = nlin-1; i < nlin; i++, d--){
        somaL[i] = 0;
        somaC[i] = 0;
        for(int j = 0; j < ncol; j++){
            
            somaL[i] += m[i][j];
            somaC[i] += m[j][i];
            
        }
        
        somaD[0] += m[i][i];
        somaD[1] += m[i][d];
        
    }
    
    for(int i = 0; i < nlin; i++)
        if(somaL[i] != somaC[i] || somaL[i] != somaD[0] || somaL[i] != somaD[1]) return 0;
    
    
    return 1;
}

int main(){
    
    int nlin = 3, ncol = 3, **m = NULL;
    
    m = (int **) malloc(nlin*sizeof(int *));
    if(m){
        for(int i = 0; i < nlin; i++)
            m[i] = (int *) malloc(ncol*sizeof(int));
    } else printf("Erro na alocação de memória");
    
    setMatriz(m, nlin, ncol);
    
    if(isQuadradoMagico(m, nlin, ncol)) printf("sim\n");
    else printf("nao\n");
    
    
    return 0;
}