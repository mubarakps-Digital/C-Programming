// demonstrating prefix and postfix operators
#include<stdio.h>
int main(){
    int a=5,b=8,c=37,d=100;
    int A=++a,B=b++,C=--c,D=d--;
    printf("Prefix First change the value then using it\n");
    printf("Increment :\n");
    printf("a=%d\nA=%d\n",a,A);
    printf("Decrement :\n");
    printf("c=%d\nC=%d\n",c,C);
    printf("Postfix First using the value then change it\n");
    printf("Increment :\n");
    printf("b=%d\nB=%d\n",b,B);
    printf("Decrement :\n");
    printf("d=%d\nD=%d\n",d,D);
    return 0;
}
