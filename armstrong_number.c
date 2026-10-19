//Program to check if a given number is Armstrong number or not
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a three digit number =");
    scanf("%d",&num);
    int hundreds=(num/100),tens=(num/10)%10,ones=(num%10);
    int Armstrong=pow(hundreds,3)+pow(tens,3)+pow(ones,3);
    if(Armstrong == num){
        printf("Enteredd number is an Armstrong number");
    }
    else{
        printf("The entered number is not an Armstrong number");
    }
    return 0;
}