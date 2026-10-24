/*Print all numbers from 0 to 10 except for 6 */
#include<stdio.h>
int main(){
    int num=0;
    while(num<=10){
        printf("%d\n",num);
        num++;
        if(num == 6){
            num++;
            continue;
        }
    }
    return 0;
}