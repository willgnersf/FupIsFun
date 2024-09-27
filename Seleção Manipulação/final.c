#include <stdio.h>

int main(){
    
    int n1 = 0, n2 = 0, final = 0, media = 0;
    
    scanf("%d %d", &n1, &n2);
    
    media = (n1+n2)/2;
    
    if(media > 7) printf("aprovado\n");
    else if(media > 4){
        scanf("%d", &final);
        
        media = (media+final)/2;
        
        if(media >= 5) printf("aprovado na final\n");
        else printf("reprovado na final\n");
        
    } else printf("reprovado\n");

    return 0;
}