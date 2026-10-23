/*Keep taking number as input from user until user 
enters a number which is multiple of 7*/
#include<stdio.h>
int main(){
    int num;
    do{
        printf("Enter the number = ");
        scanf("%d",&num);
        if((num%7)==0){
            break;
        }
    } while(1);
    printf("Sucessfuly entered Multiple of 7 number");
    return 0;
}