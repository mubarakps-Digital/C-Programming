/*program that takes two numbers and an operator from the user, 
then performs the selected operation using switch*/
#include<stdio.h>
int main(){
    int n1,n2;
    char op;
    printf("Enter the 1st number =");
    scanf(" %d", &n1);
    printf("Enter the operator (/,*,+,-,%%) =");
    scanf(" %c", &op);
    printf(" Enter the 2nd number =");
    scanf(" %d", &n2);
    switch(op){
        case('*'):printf(" %d %c %d = %d\n",n1,op,n2,(n1*n2));
        break;
        case('/'):
        if(n2==0){
            printf("Division by zero is not allowed\n");
        }
        else {
        printf(" %d %c %d = %d\n",n1,op,n2,(n1/n2));
        }
        break;
        case('+'):printf(" %d %c %d = %d\n",n1,op,n2,(n1+n2));
        break;
        case('-'):printf(" %d %c %d = %d\n",n1,op,n2,(n1-n2));
        break;
        case('%'):
        if(n2==0){
            printf("Modulus by zero is not allowed\n");
        }
        else{
            printf("%d %c %d = %d\n",n1,op,n2,(n1 % n2));
        }
        break;
        default:printf(" Invalid operator");
    }
    return 0;
}