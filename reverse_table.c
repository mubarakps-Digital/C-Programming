/*Print reverse of the tables for a number n*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);
    int i=10;
    do{
     printf("%d * %d = %d\n",num,i,num*i);
        i--;
    }while(i>=1);
    return 0;
}