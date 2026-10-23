/*Print the table of a number input by the user 
(using do while loop)*/
#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter the Number = ");
    scanf(" %d",&num);
  do{
    printf("%d * %d = %d\n",num,i,num*i);
    i++;
  }while(i<=10);
    return 0;
}