#include<stdio.h>
int findMaxMin(int arr[],int n,int *max, int *min){
    *max = arr[0];
    *min = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]< *min)
            *min = arr[i];
        if (arr[i]> *max)
            *max = arr[i];
    }
}

int main (){
    int n;
    scanf("%d", &n);

    int arr[n];
    scanf("%d", &arr[n]);

    printf("%d", findMaxMin(n));

    return 0;
}