//Print the numbers from 0 to 'n' is given by user
#include<stdio.h>
int main(){
    int num;
    int i=0;
    printf("Enter the Number = ");
    scanf("%d",&num);
    while(i<=num){
        printf("%d\n",i);
        i++;
    }
    return 0;
}