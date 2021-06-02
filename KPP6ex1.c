#include<stdio.h>
#define LEN 100

int main(){
    char text[LEN];
    printf("Bitte geben sie einen Text ein!");
    fgets(text,LEN,stdin);
    int string_len;
    for(string_len = 0; *(text+string_len);string_len++);
    string_len--;
    for(int i = 0; i<string_len/2;i++){
        if(*(text+i)!= *(text+string_len-(i+1))){
            printf("Kein Palindrom!");
            return 0;
        }
    }
    printf("Palindrom!");
    return 0;
}