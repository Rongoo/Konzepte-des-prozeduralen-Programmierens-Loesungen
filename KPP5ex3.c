#include<stdio.h>
#include<stdbool.h>

int entfernung[5][5] = {
 { 0, 2, 5, 9, 14},
 { 0, 0, 7, 15, 27},
 { 0, 0, 0, 9, 23},
 { 0, 0, 0, 0, 12},
 { 0, 0, 0, 0, 0}
 };

int main(){
int ort_1 = 0, ort_2 = 0;
bool valid_input = false;
while (!valid_input)
{
    printf("Bitte geben sie 2 Ortsnummern an (1-5 , 1-5):\n");
    scanf("%d,%d",&ort_1,&ort_2);
    if(ort_1 > 0 && ort_1 < 6 && ort_2 > 0 && ort_2 < 6){
        valid_input = true;
    }else{
    printf("Falsche eingabe! Die Zahl muss im Bereich 1-5 liegen!");
    }
}
int distance = 0;
if(ort_1>ort_2){
    distance = entfernung[ort_2-1][ort_1-1]; 
}else{
    distance = entfernung[ort_1-1][ort_2-1]; 
}
printf("%d", distance);
return 0;
}