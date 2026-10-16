// demonstrating prefix and postfix operators
#include<stdio.h>
int main(){
    int a=5,b=8,c=37,d=100;
    int A=++a,B=b++,C=--c,D=d--;
    printf("Prefix First change the value then using it\nA=%d\nC=%d\n",A,C);
    printf("Postfix First using the value then change it\nB=%d\nD=%d\n",B,D);
    return 0;
}