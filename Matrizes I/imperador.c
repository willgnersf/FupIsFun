#include <stdio.h>
#include <stdlib.h>

void setMatriz(char **m, int tam){
    
    for(int i = 0; i < tam; i++)
        for(int j = 0; j < tam; j++){
            scanf(" %c", &m[i][j]);
        }
            
}

int arena(char **m, int tam){
    
    int resultado = 0, leao = 0, resultadoL = 0;
    
    for(int i = 0; i < tam; i++){
        leao = 0;
        resultadoL = 0;
        for(int j = 0; j < tam; j++){
            if(m[i][j] == 'G'){
                resultado += 2;
                resultadoL += 2;
            } else if(m[i][j] == 'C'){
                resultado--;
                resultadoL--;
                if(j + i == tam - 1){
                    resultado--;
                    resultadoL--;
                }
            } else if(m[i][j] == 'L') leao = 1;
            
        }
        
        if(leao) resultado -= resultadoL;
        
    }
    
    if(resultado > 0) return 1;
    else if(resultado < 0) return 0;
    
    return 2;
}

int main(){
    
    int tam = 0, resultado = 0;
    char **m = NULL;
    
    scanf("%d", &tam);
    
    m = (char **) malloc(tam*sizeof(char *));
	if(m) {
		for(int i=0; i<tam; i++)
			m[i] = (char *) malloc(tam*sizeof(char));
	} else printf("Erro na alocação de memória");
	
	setMatriz(m, tam);
	
	resultado = arena(m, tam);
	
	if(resultado == 2) printf("Ninguem\n");
	else if(resultado == 1) printf("Gladiadores\n");
	else printf("Condenados a morte\n");
    
    return 0;
}