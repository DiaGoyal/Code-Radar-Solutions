#include <stdio.h>

int main(){
    char alp;
    scanf("%c", &alp);
    if ('A'<= alp && alp <= 'Z'){
        printf("Uppercase");
    }else if('a'<= alp && alp <= 'z'){
        printf("Lowercase");
    }else {
        printf("Not an alphabet");
    }
    return 0;
}