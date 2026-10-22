#include<stdio.h>
int main(){
    int num,sum=0,i=1;
    printf("Enter the natural number = ");
    scanf("%d",&num);
    while(i<=num){
        printf(" %d ",i);
        if(i<num){
            printf("+");
        }
       sum +=i;
       i++;
    }
    printf(" = %d",sum);
    printf("\nReverse of N natural number :");
    for(int i=num;i>=1;i--){
        printf("\n%d\n",i);
    }
    return 0;
}