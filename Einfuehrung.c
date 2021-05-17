#include<stdio.h>

int main(){

int number,anotherNumber;
printf("I want to know you number :");
scanf("%d , %d",&number,&anotherNumber);
if(number+anotherNumber >= 10){
printf("Bip-.Bup-.Bap-. Your numbers are: %d , %d",number, anotherNumber);
}else{
    printf("Bip-.Bup-.Bap-. Your numbers are too small I don't want to print them");
}

return 0;
}

