#include <stdio.h>

int main(){
    char alp;
    scanf("%c", &alp);
    if ('A'<= alp <= 'Z'){
        printf("Uppercase");
    }else if('a'<= apl <= 'z'){
        printf("Lowercase");
    }else {
        printf("Not an alphabet");
    }
    return 0;
}