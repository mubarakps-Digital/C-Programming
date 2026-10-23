/*Print the table of a number input by the user 
(using for loop)*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number = ");
    scanf(" %d",&num);
   for(int i=1; i<=10;i++){
    printf("%d * %d = %d\n",num,i,num*i);
   }
    return 0;
}