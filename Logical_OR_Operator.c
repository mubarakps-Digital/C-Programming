#include<stdio.h>
int main(){
    int monday,raining;
    printf("Enter 1 if it is Monday and 0 if it is not Monday =");
    scanf("%d",&monday);
    printf("Enter 1 if it is Raining and 0 if it is not Raining =");
    scanf("%d",&raining);
    printf("The Monday status =%d\n",monday);
    printf("The Raining status =%d\n",raining);
    printf("The result is 1 only when at lest one condition is true, Otherwise the result is 0 =%d",monday || raining);
    return 0;
}