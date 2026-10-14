//C program for arithmetic expression calculation
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the 'a' value =");
    scanf("%d",&a);
    printf("Enter the 'b' value =");
    scanf("%d",&b);
    printf("Enter the 'c' value =");
    scanf("%d",&c);
    printf("Enter the 'd' value =");
    scanf("%d",&d);
    printf("Enter the 'e' value =");
    scanf("%d",&e);
    printf("Arithmetic expression calculation of =%.3f\n",(float)((a+b)*(c-d))/e);
    return 0;
}