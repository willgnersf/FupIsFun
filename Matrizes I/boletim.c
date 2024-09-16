#include <stdio.h>
#include <stdlib.h>

void setMatriz(int **m, int nlin, int ncol){
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            scanf("%d", &m[i][j]);
    
}

void somaMatriz(int **m, int nlin, int ncol, int *soma){
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            *soma += m[i][j];
    
}

int main(){
    int nlin = 2, ncol = 3, soma = 0;
    int **m = 0;
    
    m = (int **) malloc(nlin * sizeof(int *));
    if(m){
        for(int i = 0; i < nlin; i++)
            m[i] = (int *) malloc(ncol * sizeof(int));
    } else
        printf("Erro na alocação de memória");
        
    setMatriz(m , nlin, ncol);
    
    somaMatriz(m, nlin, ncol, &soma);
    
    printf("%d\n", soma);
    
    return 0;
}