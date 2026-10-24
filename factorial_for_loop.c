/*Print the factorial of a number n*/
#include<stdio.h>
int main(){
int num,fact=1;
printf("Enter the number =");
scanf("%d",&num);
for(int i=1;i<=num;i++){
 fact*=i;
}
 printf("The factorial of %d = %d",num,fact);
  return 0;
}