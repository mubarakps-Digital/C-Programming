/*Print the table of a number input by the user
 (using while loop)*/
#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter the Number = ");
    scanf(" %d",&num);
    while(i<=10){
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }
    return 0;
}