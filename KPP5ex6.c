#include<stdio.h>
#define BUF_LEN 1000
#define COUNT_LEN 256

void chomp(char text[]){
    int j;
    for(j = 0; text[j] != 0;j++);
    if(j > 0 && text[j-1] == '\n'){
        text[j-1] = 0;
    }
}

int main(){
    char text[BUF_LEN];
    int count[COUNT_LEN];
    //Einlesen
    printf("Bitte geben sie einen Text ein!\n");
    fgets(text,BUF_LEN,stdin);
    chomp(text);
    //Array Count auf 0 Initalisieren
    for(int i=0; i< COUNT_LEN; i++){
        count[i] = 0;
    }
    //Zählen bis 0 Byte
    for(int i = 0; text[i]; i++){
    //extra Aufgabe ansopnsten einfach nur: count[text[i]]++;
        if(text[i] >= 65 && text[i] <= 90){
            count[text[i]+32]++;
        }else{
            count[text[i]]++;
        }
    }
    //Ausgabe
    for(int i = 0; i < COUNT_LEN;i++){
        if(!count[i]){
            continue;
        }
            printf("%c (%d)\n",i,count[i]);
    }
    return 0;
}

