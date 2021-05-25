#include<stdio.h>
#define LEN 1000
// verdoppeln von e
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
//worst case = LEN*2
char textBuf[LEN*2];
int offset = 0;
int i;
for(i = 0; text[i];i++){
    if(text[i] == 'e'){
        textBuf[i+offset]=text[i];
        offset++;
        textBuf[i+offset]=text[i];
    }else{
        textBuf[i+offset]=text[i];
    }
}
textBuf[i+offset]=0;
printf(textBuf);
return 0;    
}