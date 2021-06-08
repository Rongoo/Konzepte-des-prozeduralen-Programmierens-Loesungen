#include<stdio.h>
#include<stdlib.h>
#define LEN 10
#define WORD_LEN 100

void chomp(char arr[]){
    int i = 0;
    for(i;arr[i];i++);
    if(arr[i-1] == '\n'){
        arr[i-1] = 0;
    }
}

int isEmpty(char arr[]){
    int strIsEmpty = 1;
    for(int i = 0; arr[i]; i++){
        if(arr[i]!= ' '){
            strIsEmpty = 0;
            break;
        }
    }
    return strIsEmpty;
}

int main(){
    char input[WORD_LEN];

    int counter = 0;
    int currPos=0;
    char *words[LEN];

    do
    {
        printf("Geben sie ein Wort ein: ");
        fgets(input,WORD_LEN,stdin);
        chomp(input);
        if(isEmpty(input)){
            break;
        }
        //get len of str
        int len=0;
        for(len; input[len];len++);
        words[counter] = malloc(len*sizeof(char));
        
        //copy str to location
        int i = 0;
        for(i;input[i];i++){
            words[counter][i] = input[i];
        }
        words[counter][i] = 0;
        

        counter++;
    }while(counter<LEN);

    for(int i = 0; i<counter;i++){
        printf("The string at position %d is\t\"%s\"\n",i+1,words[i]);
        free(words[i]);
    }


    return 0;
}