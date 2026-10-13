//write a program to calculate area of circle
#include<stdio.h>
#include<math.h>
int main(){
    float r;
    printf("Enter the valur of radus =");
    scanf("%f",&r);
    float area=3.14*pow(r,2);
    printf("The Area of a circle =%f",area);
    return 0;
}