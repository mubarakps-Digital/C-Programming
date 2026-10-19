// Program to check whether a character is uppercase or lowercase
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a single character =");
    scanf("%c",&ch);
    if((ch>='A')&&(ch<='Z')){
        printf("The Entered character is uppercase");
    }
    else if((ch>='a')&&(ch<='z')){
        printf("The entered character is lowercase");
    }
    else{
        printf("The entered character is not an alphabet");
    }
    return 0;
}