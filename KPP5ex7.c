#include<stdio.h>
#define LEN 1000


int main(){
char text[LEN];
printf("Bitte geben sie Ihren Text ein!\n");
fgets(text, LEN , stdin);
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