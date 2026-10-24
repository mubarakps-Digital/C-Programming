/*Print all the odd numbers from 5 to 50 */
#include<stdio.h>
int main(){
    int num=5;
    do{
        if((num%2)==0){
            num++;
            continue;
        }
        printf("%d\n",num);
        num++;
    } while(num<=50);
    return 0;
}