#include <stdio.h>

int main(){
    
    int wifi = 0, login = 0, admin = 0;
    
    scanf("%d %d %d", &wifi, &login, &admin);
    
    
    if(!wifi){
        printf("you must connect to wifi\n");
        return 0;
    }
    if(!login){
        printf("you need to login first\n");
        return 0;
    }
    if(!admin){
        printf("you must to login as admin\n");
        return 0;
    }
    
    printf("done\n");
    
    return 0;
}