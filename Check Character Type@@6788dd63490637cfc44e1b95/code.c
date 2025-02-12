#include <stdio.h>

void main(){
    char ch;
    scanf("%c", &ch);
    if (is ch){
        if(ch = "A" || ch = "E" || ch = "I" || ch = "O" || ch = "U"||
        ch = "a" || ch = "e" || ch = "i" || ch = "o" || ch = "u"){
            printf("Vowel");
        }else {
            printf("Consonant");
        }
    }else if (0 >= ch && ch <=9){
        printf("Digit");
    }else {
        printf("Special Character");
    }
    return 0;
}