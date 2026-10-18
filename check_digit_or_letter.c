// Program to checck if the entered character is a digit or a letter
#include<stdio.h>
int main(){
    char A;
    printf("Enter a single character =");
    scanf("%c",&A);
    printf("If the entered character is a digit, the result is (YES = 1), otherwise (NO = 0) = %d\n",(A>='0')&&(A<='9'));
    printf("If the entered character is a letter, the result is (YES = 1), otherwise (NO = 0) =%d\n",(A>='A')&&(A<='Z')||(A>='a')&&(A<='z'));
    return 0;
}