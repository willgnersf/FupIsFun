#include <stdio.h>
#include <stdlib.h>

void setMatriz(int **m, int nlin, int ncol){
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            scanf("%d", &m[i][j]);
    
}

int contMenorAtrasMaior(int **m, int nlin, int ncol){
    
    int cont = 0;
    
    for(int i = 1; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
                if(m[i][j] < m[i-1][j])
                    cont++;
                
    return cont;
    
}

int main(){
    
    int nlin = 0, ncol = 0, **m = NULL;
    
    scanf("%d %d", &nlin, &ncol);
    
    m = (int **) malloc(nlin*sizeof(int*));
	if(m) {
		for(int i=0; i<nlin; i++)
			m[i] = (int *) malloc(ncol*sizeof(int));
	} else printf("Erro na alocação de memória");
	
	setMatriz(m, nlin, ncol);
	
	printf("%d\n", contMenorAtrasMaior(m, nlin, ncol));
	
	return 0;
    
}