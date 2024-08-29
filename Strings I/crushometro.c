#include <stdio.h>

int contLetras(char *frase){
    
    int i = 0;
    
    for( ; frase[i] != '\0'; i++);
    
    return i;
    
}

int contVogal(char *frase){
    
    int c = 0;
    
    for(int i = 0 ; frase[i] != '\0'; i++){
        
        switch(frase[i]){
            case 'a': case 'e':
            case 'i': case 'o':
            case 'u': case 'A':
            case 'E': case 'I':
            case 'O': case 'U':
                c++;
                break;
        }
            
        
    }
        
    
    return c;
}

int crushometro(char *nome, char *nomeC){
    
    int crush = 0, contN = contLetras(nome), contNC = contLetras(nomeC), vogalN = contVogal(nome), vogalNC = contVogal(nomeC);
    
    if(nome[0] == nomeC[0])
        crush += 20;
    if(contN == contNC)
        crush += 30;
    if(vogalN == vogalNC)
        crush += 30;
        //as soluções alternativas para essa comparação são um pouco mais complexas então vou deixar assim por enquanto, vou estudar elas e irei mudar para algo melhor do que 10 condições em um if
    if((nome[contN-1] == 'a' || nome[contN-1] == 'e' || nome[contN-1] == 'i' || nome[contN-1] == 'o' || nome[contN-1] == 'u') && (nomeC[contNC-1] == 'a' || nomeC[contNC-1] == 'e' || nomeC[contNC-1] == 'i' || nomeC[contNC-1] == 'o' || nomeC[contNC-1] == 'u'))
        crush += 20;
    else if(nome[contN-1] != 'a' && nome[contN-1] != 'e' && nome[contN-1] != 'i' && nome[contN-1] != 'o' && nome[contN-1] != 'u' && nomeC[contNC-1] != 'a' && nomeC[contNC-1] != 'e' && nomeC[contNC-1] != 'i' && nomeC[contNC-1] != 'o' && nomeC[contNC-1] != 'u')
        crush += 20;
    else
        crush -= 10;
    if(crush < 0)
        crush = 0;
    
    
    return crush;
}

int main(){
    
    char nome[100], nomeCrush[100];
    int ic = 0;
    
    scanf("%s %s", nome, nomeCrush);
    
    ic = crushometro(nome, nomeCrush);
    
    printf("As chances do crush te dar bola sao: %d%%!\n", ic);
    
    return 0;
    
}