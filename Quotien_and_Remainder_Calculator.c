//Quotient and Remainder Calculator
  #include<stdio.h>
  int main(){
    int a,b=12;
    printf("Enter the Nemarator =");
    scanf("%d",&a);
    int quotient=a/b,reminder=a%b;
    printf("The quotient =%d\n",quotient);
    printf("The reminder =%d\n",reminder);
    printf("The original nemarator number =%d\n",quotient*b+reminder);
    return 0;
  }