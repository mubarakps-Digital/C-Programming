//Compound Arithmetic Assignment
#include<stdio.h>
int main()
{
    int n=100;
    n+=25;
    printf("The n value adding with 25 =%d\n",n);
    n-=15;
    printf("The n value subtracting with 15 =%d\n",n);
    n*=2;
    printf("The n value multiplying with 2 =%d\n",n);
    n/=5;
    printf("The n value dividing with 5 =%d\n",n);
    n%=7;
    printf("The remainder when n value is divided by 7 =%d\n",n);
    return 0;
}