#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int **m, int nlin, int ncol){
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            scanf("%d", &m[i][j]);
    
}

void subDiagonal (int **m, int nlin, int *subD){
    
    for(int i = 0, j = nlin-1; i < nlin; i++, j--)
            *subD += m[i][i] - m[i][j];
    
}

int main(){
    
    int nlin = 5, ncol = 5, subD = 0, **m = NULL;
    
    m = (int **) malloc(nlin*sizeof(int*));
	if(m) {
		for(int i=0; i<nlin; i++)
			m[i] = (int *) malloc(ncol*sizeof(int));
	} else printf("Erro na alocação de memória");
	
	lerMatriz(m, nlin, ncol);
	subDiagonal(m, nlin, &subD);
	
	printf("%d\n", subD);
    
    return 0;
}