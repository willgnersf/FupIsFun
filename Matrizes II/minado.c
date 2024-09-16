#include <stdio.h>
#include <stdlib.h>

void setMatriz(char **m, int nlin, int ncol){
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++)
            scanf(" %c", &m[i][j]);
    
}

void getMatriz(char **m, int nlin, int ncol){
    
    for(int i = 0; i < nlin; i++){
        for(int j = 0; j < ncol; j++)
            printf("%c", m[i][j]);
        printf("\n");
    }
    
}

void campoMinado(char **campoVazio, char **campoCompleto, int nlin, int ncol){
    int mina = 0;
    
    for(int i = 0; i < nlin; i++)
        for(int j = 0; j < ncol; j++){
            
            mina = 0;
            
            if(campoVazio[i][j] == '-'){
                
                for (int di = -1; di <= 1; di++)
                    for (int dj = -1; dj <= 1; dj++) {
                        
                        if (di == 0 && dj == 0) continue;
                        
                        if (i + di >= 0 && i + di < nlin && j + dj >= 0 && j + dj < ncol)
                            if (campoVazio[i + di][j + dj] == '*') 
                                mina++;
                                
                    }
                
                if(mina > 0) campoCompleto[i][j] = mina+48;
                else campoCompleto[i][j] = '-';
            } else {
                campoCompleto[i][j] = '*';
            }
            
            
        }
            
    
}

int main(){
    
    int nlin = 0, ncol = 0;
    char **campo = NULL, **campoCompleto = NULL;
    scanf("%d %d", &nlin, &ncol);
    
    campo = (char **) malloc(nlin*sizeof(char *));
    if(campo){
        for(int i = 0; i < nlin; i++)
            campo[i] = (char *) malloc(ncol*sizeof(char));
    } else printf("Erro na alocação de memória");
    
    campoCompleto = (char **) malloc(nlin*sizeof(char *));
    if(campoCompleto){
        for(int i = 0; i < nlin; i++)
            campoCompleto[i] = (char *) malloc(ncol*sizeof(char));
    } else printf("Erro na alocação de memória");
    
    setMatriz(campo, nlin, ncol);
    
    campoMinado(campo, campoCompleto, nlin, ncol);
    
    getMatriz(campoCompleto, nlin, ncol);
    
    return 0;
}