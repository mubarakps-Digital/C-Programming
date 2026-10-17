//Program to check whether a number is even or odd and whether it is divisible by 2
#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number =");
    scanf("%d",&num);
    printf("If reminder = %d\n",num%2);
    printf("If reminder = 0 then divisible by 2 and even number\nOtherwise the number is odd and not divisible by 2\n");
    return 0;
}
