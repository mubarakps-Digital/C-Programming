/*Print reverse of the tables for a number n*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);
    int i=10;
    while(i>=1){
        printf("%d * %d = %d\n",num,i,num*i);
        i--;
    }
    return 0;
}