//write a program to calculate cube of number 
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number =");
    scanf("%d",&n);
    int c=pow(n,3);
    printf("The cube of a number =%d",c);
    return 0;
}