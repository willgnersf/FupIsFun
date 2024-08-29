#include <stdio.h>

void contLed(char *str){

    int cont = 0;

    scanf(" %[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++ ){

        if(str[i] == '1')
            cont += 2;
        else if(str[i] == '7')
            cont += 3;
        else if(str[i] == '4')
            cont += 4;
        else if(str[i] == '2' || str[i] == '3' || str[i] == '5')
            cont += 5;
        else if(str[i] == '9' || str[i] == '6' || str[i] == '0')
            cont += 6;
        else if(str[i] == '8')
            cont += 7;
        

    }

    printf("%d leds\n", cont);

}

int main(){

    int rep = 0;
    char str[20];

    scanf("%d", &rep);

    for(int i = 0; i != rep; i++){
        contLed(str);
    }

    return 0;
}