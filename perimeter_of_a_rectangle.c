//write a program to calculate a perimeter of a rectangle
#include<stdio.h>
int main(){
    int s1,s2;
    printf("Enter the 1st side value of a rectangle =");
    scanf("%d",&s1);
    printf("Enter the s2 side of a rectangle =");
    scanf("%d",&s2);
    printf("The perimeter of a rectangle =%d",2*(s1+s2));
    return 0;
}