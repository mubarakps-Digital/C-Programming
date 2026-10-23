/*Keep taking number as input from user until 
user enters an odd number*/
#include<stdio.h>
int main(){
    int num;
    do{
        printf("Enter the number = ");
        scanf("%d",&num);
        if((num%2)!=0){
            break;
        }
    } while(1);
    printf("Odd Number Detected");
    return 0;
}