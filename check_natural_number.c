/*Program to check if the given number is a natural 
number or not*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number = ");
    if(scanf("%d",&num)!=1){
        printf("Invalid input");
        return 1;
    }
    else if(num>0){
        printf("The entered is natural number\n");
    }
    else{
        printf("The entered is not natural number\n");
    }
    return 0;
}