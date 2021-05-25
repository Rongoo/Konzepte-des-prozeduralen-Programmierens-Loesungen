#include<stdio.h>
#define LEN 1000

void chomp(char text[]){
    int i;
    for(i = 0; text[i];i++);
    if(text[i-1]=='\n'){
        text[i-1]=0;
    }
}

int main(){
char text[LEN];
printf("Bitte geben sie Ihren Text ein!\n");
fgets(text, LEN , stdin);
chomp(text);
for(int i = 0; text[i];i++){
    if(text[i] == 'e'){
        int j;
        for(j = i; text[j];j++){
            text[j] = text[j+1]; 
        }
        text[j+1]=0;
        i--;
    }
}
printf(text);
return 0;    
}