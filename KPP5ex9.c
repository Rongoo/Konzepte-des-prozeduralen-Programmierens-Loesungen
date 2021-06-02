#include<stdio.h>
#define LEN 10

void fill(int arr[]){
for(int i = 0; i<LEN;i++){
        arr[i]=i;
    }
}

void reverse_rec(int arr[],int index){
    if(index<LEN/2){
        int temp = arr[index];
        arr[index] = arr[LEN-1-index];
        arr[LEN-1-index] = temp;
        reverseRec(arr,index+1);
    }
}

void reverse(int arr[]){
    for(int i = 0;i<LEN/2;i++){
        int temp = arr[i];
        arr[i]=arr[LEN-(i+1)];
        arr[LEN-(i+1)]=temp;
    }
}

void printArray(int arr[]){
    for(int i = 0; i<LEN;i++){
    printf("%d,",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[LEN];

    fill(arr);
    printf("Filled array: \n");
    printArray(arr);

    printf("Reversed once: \n");
    reverse(arr);
    printArray(arr);
    
    printf("Reversed twice: \n");
    reverseRec(arr,0);
    printArray(arr);

    return 0;
}