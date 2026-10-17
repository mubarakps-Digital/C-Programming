#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the first number =");
    scanf("%d",&n1);
    printf("Enter the second number =");
    scanf("%d",&n2);
    printf("Enter the third number =");
    scanf("%d",&n3);
    printf("THe Average of three numbers =%.4f\n",(float)(n1+n2+n3)/3);
    return 1;
}