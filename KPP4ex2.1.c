#include<stdio.h>

int main(){
    int amount;
    printf("Wie viele zahlen wollen sie einlesen?\n");
    scanf("%d",&amount);
    printf("Bitte geben sie ihre Zahlen ein:\n");
    int sum_pos = 0, sum_neg = 0;
    for(int i = 0; i < amount;i++){
        int currNumber;
        scanf("%d",&currNumber);
        if(currNumber > 0){
        sum_pos += currNumber;
        }else{
            sum_neg += currNumber;
        }
    
    }
    printf("Positiv: %d\n", sum_pos);
    printf("Negativ: %d", sum_neg);
    return 0;
}