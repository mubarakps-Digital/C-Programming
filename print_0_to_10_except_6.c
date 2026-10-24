/*Print all numbers from 0 to 10 except for 6 */
#include<stdio.h>
int main(){
    int num=0;
    do{
        if(num == 6){
            num++;
            continue;
        }
        printf("%d\n",num);
        num++;
    } while(num<=10);
    return 0;
}