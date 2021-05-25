#include<stdio.h>
#define LEN 100

int main(){
    int arr[LEN];
    for(int i = 0; i<LEN;i++){
        arr[i]=i;
        printf("%d,",arr[i]);
    }
    printf("\n");
    for(int i = 0;i<LEN/2;i++){
        int temp = arr[i];
        arr[i]=arr[LEN-(i+1)];
        arr[LEN-(i+1)]=temp;
    }

    for(int i = 0; i<LEN;i++){
    printf("%d,",arr[i]);
    }
    return 0;
}