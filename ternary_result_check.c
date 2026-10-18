/*Program to check if a student passed or failed (marks>=30) 
is pass and (marks>=30) is fail*/
#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks =");
    scanf("%d",&marks);
    printf("====The Student Result====\n");
    (marks>=30)?printf("Result is pass"):printf("Result is failed");
    return 0;
}