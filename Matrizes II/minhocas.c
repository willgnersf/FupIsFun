#include <stdio.h>
#include <stdlib.h>

void setMatriz(int **m, int nlin, int ncol){
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            scanf("%d", &m[i][j]);
    
}

int campoMinhocas(int **m, int nlin, int ncol){
    
    int somaMaior = 0, somaC = 0, somaL = 0;
    
    for(int i = 0; i < nlin; i++){
        somaC = 0;
        somaL = 0;
        for(int j = 0; j < ncol; j++){
            
            somaC += m[i][j];
            if(j <= i) somaL += m[j][i];
            
        }
        if(somaC >= somaL && somaMaior < somaC) somaMaior = somaC;
        else if(somaMaior < somaL) somaMaior = somaL;
        
    }
    
    return somaMaior;
}

int main(){
    
    int nlin = 0, ncol = 0, **m = NULL;
    
    scanf("%d %d", &nlin, &ncol);
    
    m = (int **) malloc(nlin*sizeof(int *));
    if(m){
        for(int i = 0; i < nlin; i++)
            m[i] = (int *) malloc(ncol*sizeof(int));
    } else printf("Erro na alocação de memória");
    
    setMatriz(m, nlin, ncol);
    
    printf("%d\n", campoMinhocas(m, nlin, ncol));
    
    return 0;
}
