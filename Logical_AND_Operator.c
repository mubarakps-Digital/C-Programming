#include<stdio.h>
int main(){
    int sunday,snowing;
    printf("Enter 1 if it is sunday and 0 if it is not sunday =");
    scanf("%d",&sunday);
    printf("Enter 1 if it is snowing and 0 if it is not snowing =");
    scanf("%d",&snowing);
    printf("The sunday status =%d\n",sunday);
    printf("The snowing status =%d\n",snowing);
    printf("The result is 1 only when both conditions are true, Otherwise the result is 0 =%d",sunday && snowing);
    return 0;
}