/*Print the factorial of a number n*/
#include<stdio.h>
int main(){
  int num;
  printf("Enter the number = ");
  scanf("%d",&num);
  int fact =1,i=1;
  while(i<=num){
    fact*=i;
    i++;
  }
  printf("Factorial of %d = %d",num,fact);
  return 0;
}