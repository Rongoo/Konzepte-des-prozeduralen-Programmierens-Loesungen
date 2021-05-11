#include<stdio.h>
#define BUFLEN 100

int main(){
    char myString[BUFLEN];
    printf("Bitte geben sie mir einen Text: ");
    fgets(myString , BUFLEN , stdin);

    int counter = 0;
    for(counter = 0; myString[counter]!= 0 && counter < BUFLEN; counter++);

    if(myString[counter-1] == '\n'){
        counter--;
    }

    printf("Der String ist %d Zeichen lang.",counter);

    return 0;
}