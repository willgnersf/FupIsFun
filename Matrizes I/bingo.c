#include <stdio.h>
#include <stdlib.h>

void setVetor(int *v, int tam){
    
    for(int i = 0; i < tam; i++)
        scanf("%d", &v[i]);
    
}

int bingo(int **matriz, int nlin, int ncol, int *vetor, int tam){
    
    int bingo = 0;
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            for(int d = 0; d < tam; d++)
                if(matriz[i][j] == vetor[d]){
                    bingo++;
                    break;
                }
    
    return bingo;
}

int main(){
    
    int tam = 6, cont = 0, *v = NULL, **m = NULL;
    
    m = (int **) malloc(4*sizeof(int*));
	if(m) {
		for(int i=0; i<4; i++)
			m[i] = (int *) malloc(4*sizeof(int));
	} else printf("Erro na alocação de memória");
    
    m[0][0] = 1; m[0][1] = 9; m[0][2] = 27; m[0][3] = 23;
    m[1][0] = 34; m[1][1] = 20; m[1][2] = 37; m[1][3] = 47;
    m[2][0] = 30; m[2][1] = 87; m[2][2] = 55; m[2][3] = 69;
    m[3][0] = 13; m[3][1] = 60; m[3][2] = 99; m[3][3] = 66;
    
    v = (int *) malloc(tam*sizeof(int));
    
    setVetor(v, tam);
	
	cont = bingo(m, 4, 4, v, tam);
	
	printf("%d\n", cont);
    
    return 0;
}