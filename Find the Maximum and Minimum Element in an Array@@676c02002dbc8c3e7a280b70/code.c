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
    int i;
    scanf("%d", &arr[i]);

    int *max, *min ;
    findMaxMin(arr, n, max, min);
    printf("%d %d",max,min);

    return 0;
}