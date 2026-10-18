//Program to check smallest among two numbers
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter 1st number =");
    scanf("%d",&num1);
    printf("Enter 2nd number =");
    scanf("%d",&num2);
    printf("If 1st number is smallest, the result is (yes = 1), otherwise (no = 0) = %d\n",(num1<num2));
    printf("If 2nd number is smallest, the result is (yes = 1), otherwise (no = 0) = %d\n",(num1>num2));
    printf("If both numbers are equal, the result is (yes = 1), otherwise (no = 0) = %d\n",(num1==num2));
    return 0;
}