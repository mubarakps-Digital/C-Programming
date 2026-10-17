//Program to check two-digit Positive numbers
#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number =");
    scanf("%d",&num);
    printf("if number is 2 digit then result 1 otherwise 0 = %d\n",(num>9) && (num<100));
    return 0;
}