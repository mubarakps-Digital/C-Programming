/*Print all the odd numbers from 5 to 50 */
#include<stdio.h>
int main(){
    int num=5;
     while(num<=50){
        printf("%d\n",num);
        num++;
        if((num%2)==0){
            num++;
            continue;
        }
     }
    return 0;
}