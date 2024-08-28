#include <stdio.h>

int ascologico(char *nome){

    int c = 0;

    for(int i = 0; nome[i] != '\0'; i++)   c += nome[i];

    return c;
}

int main(){

    char nome[100];
    int asc = 0;

    scanf("%s", nome);

    asc = ascologico(nome);

    printf("%d\n", (asc%50));

    return 0;

    /*
    %s serve para ler uma sequencia de caracteres até o espaço, ou seja, apenas uma palavra, caso queira
    ler mais de uma utilize o %[^\n] e mude a função ascologico para que não some caso nome[i] == 32
    */

}