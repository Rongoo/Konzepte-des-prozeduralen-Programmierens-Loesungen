#include<stdio.h>
#define BUFLEN 100

int main(){
    char myString[BUFLEN];
    printf("Bitte geben sie mir einen Text: ");
    fgets(myString , BUFLEN , stdin);

    int counter = 0;
    for(int i = 0; myString[i]!= 0 && i < BUFLEN;i++){
        if(myString[i] != '\n'){
        counter++;
        }
    }
    printf("%d",counter);

    return 0;
}