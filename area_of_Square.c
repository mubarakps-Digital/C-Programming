//write a program to write a Area of a square
#include<stdio.h>
int main(){
    int s1,s2;
    printf("Enter the one side value of a rectangle =");
    scanf("%d",&s1);
    printf("Enter the another side value of a rectangle =");
    scanf("%d",&s2);
    int area=s1*s2;
    printf("The Area of a rectangle =%d",area);
    return 0;
}