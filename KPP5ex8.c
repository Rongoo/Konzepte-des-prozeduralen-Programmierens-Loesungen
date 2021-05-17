#include<stdio.h>
#define LEN 1000

void chomp(char text[]){
    int i;     
    for(i = 0; text[i]&&i<LEN;i++);
    printf("%d",i);
    if(text[i] == 0 && text[i-1]== '\n'){
        text[i-1]=0;
    }

}

int main(){
    char ziffern[LEN];
    printf("Bitte geben sie ihre Zahlen ein! ");
    fgets(ziffern,LEN,stdin);
    chomp(ziffern);
    // validate
    for(int i = 0; ziffern[i];i++){
        if(!(ziffern[i]>=48 && ziffern[i]<=57)){
            printf("Falsche Eingabe! Bitte geben sie nur Ziffern ein!");            
            return -1;
        }
    }
    int sum = 0;
    for(int i = 0; ziffern[i];i++){
        sum+=ziffern[i]-48;
    }

    printf("Die Summe Ihrer Ziffer ist: %d",sum);

    return 0;
}

