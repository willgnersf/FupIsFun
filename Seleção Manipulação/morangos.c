#include <stdio.h>

int main(){

    int comprimento1 = 0, largura1 = 0, comprimento2 = 0, largura2 = 0;
    int local1 = 0, local2 = 0;

    scanf("%d %d %d %d", &comprimento1, &largura1, &comprimento2, &largura2);

    local1 = comprimento1*largura1;
    local2 = comprimento2*largura2;

    if(local1 >= local2){
        printf("%d\n", local1);
    } else printf("%d\n", local2);


    return 0;
}