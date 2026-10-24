/*Print the factorial of a number n*/
#include<stdio.h>
int main(){
  int num;
  printf("Enter the number = ");
  scanf("%d",&num);
  int fact =1,i=1;
  do{
    fact*=i;
    i++;
  }while(i<=num);
  printf("Factorial of %d = %d",num,fact);
  return 0;
}