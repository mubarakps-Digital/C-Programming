//Program to give grades to a student
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks =");
    scanf("%d",&marks);
    if((marks>=90)&&(marks<=100))
    {
        printf("The result is A+");
    }
    else if((marks>=70)&&(marks<90))
    {
        printf("The result is A");
    }
    else if((marks>=30)&&(marks<70)){
        printf("The result is B");
    }
    else if((marks>=0)&&(marks<30))
    {
        printf("The result is C");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}