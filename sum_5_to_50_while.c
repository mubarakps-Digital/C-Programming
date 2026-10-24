/*Calculate the sum of all numbers between 
5 to 50 (including 5 & 50)*/
#include<stdio.h>
int main(){
    int sum=0,i=5;
    while(i<=50){
        sum+=i;
        i++;
    }
    printf("The sum of all numbers Between 5 to 50 = %d",sum);
    return 0;
}