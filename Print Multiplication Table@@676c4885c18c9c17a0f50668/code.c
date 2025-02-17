#include <stdio.h>

int main(){
    int num, i;
    scanf("%d", &num);
    for (i=1, i<=10, ++1){
        printf("%d x %d = %d",num, i, num*i );
    }
    return 0;
}