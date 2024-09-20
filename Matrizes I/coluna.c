#include <stdio.h>
#include <stdlib.h>

void setMatriz(int **m, int tam){
    
    for(int i = 0; i < tam; i++)
        for(int j = 0; j < tam; j++)
            scanf("%d", &m[i][j]);
    
}

int maiorColuna(int **m, int tam){
    
    int soma = 0, colunaMaior[] = {0, 0};
    
    for(int i = 0; i < tam; i++){
        soma = 0;
        for(int j = 0; j < tam; j++)
            soma += m[j][i] * m[j][i];
        
        if(colunaMaior[0] < soma){
            colunaMaior[1] = i;
            colunaMaior[0] = soma;
        }
        
    }
    
    return colunaMaior[1];
}

int main(){
    
    int tam = 0, **m = NULL;
    
    scanf("%d", &tam);
    
    m = (int **) malloc(tam*sizeof(int *));
    if(m)
        for(int i = 0; i < tam; i++)
            m[i] = (int *) malloc(tam*sizeof(int));
    else printf("Erro na alocação de memória");
    
    setMatriz(m, tam);
    
    printf("%d\n", maiorColuna(m, tam));
    
    return 0;
}
