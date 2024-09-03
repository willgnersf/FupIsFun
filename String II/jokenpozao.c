#include <stdio.h>

int setValue(char *jog){
    
    int value = 0;
    
    switch(jog[0]){
        case 'p':
            value = 0;
            break;
        case 'a':
            value = 1;
            break;
        case 'w':
            value = 2;
            break;
        case 'g':
            value = 3;
            break;
        case 'r':
            value = 4;
            break;
        case 'f':
            value = 5;
            break;
        case 's':
            if(jog[1] == 'p')
                value = 8;
            else
                value = 6;
            break;
        case 'h':
            value = 7;
            break;
        default:
            value = 9;
            break;
    }
    
    return value;
    
}

int jokenpozao(int v1, int v2){

    int result = 0;

    if(v1 == 0 && (v2 < 5 && v2 > 0))
        result = 1;
    else if(v1 == 1 && (v2 < 6 && v2 > 1))
        result = 1;
    else if(v1 == 2 && (v2 < 7 && v2 > 2))
        result = 1;
    else if(v1 == 3 && (v2 < 8 && v2 > 3))
        result = 1;
    else if(v1 == 4 && v2 > 4)
        result = 1;
    else if(v1 == 5 && (v2 > 5 || v2 < 1))
        result = 1;
    else if(v1 == 6 && (v2 > 6 || v2 < 2))
        result = 1;
    else if(v1 == 7 && (v2 > 7 || v2 < 3))
        result = 1;
    else if(v1 == 8 && (v2 > 8 || v2 < 4))
        result = 1;
    else if(v1 == v2)
        result = 3;
    else
        result = 2;
        
    return result;
    
}

int main(){
    
    char jog1[20], jog2[20];
    int v1 = 0, v2 = 0;
    
    scanf("%s %s", jog1, jog2);
    
    v1 = setValue(jog1);
    v2 = setValue(jog2);
    
    if(jokenpozao(v1, v2) == 1)
        printf("jog1\n");
    else if(jokenpozao(v1, v2) == 2)
        printf("jog2\n");
    else
        printf("empate\n");
    
    return 0;
}

