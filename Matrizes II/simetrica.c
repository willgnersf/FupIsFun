#include <stdio.h>
#include <stdlib.h>

void setMatriz(int **m, int nlin, int ncol){
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            scanf("%d", &m[i][j]);
    
}

int simetrica(int **m, int nlin, int ncol){
    
    if(nlin != ncol) return 0;
    
    else{
        for(int i = 0; i < nlin; i++)
            for(int j = i; j < ncol; j++)
                if(m[i][j] != m[j][i]) return 0;
    }
    
    return 1;
    
}

int main(){
    
    int nlin = 3, ncol = 3, isSimetrica = 0;
    int **m = NULL;
    
    m = (int **) malloc(nlin * sizeof(int *));
    if(m){
        for(int i = 0; i < nlin; i++)
            m[i] = (int *) malloc(ncol * sizeof(int));
    } else printf("Erro na alocação de memória");
    
    setMatriz(m, nlin, ncol);
    isSimetrica = simetrica(m, nlin, ncol);
    
    if(isSimetrica) printf("sim\n");
    else printf("nao\n");
    
    return 0;
}