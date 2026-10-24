/*Write a C program using switch, do while loop and if-else 
to simulate a simple ATM system.*/
#include<stdio.h>
int main(){
    int Check_Balance = 50000,Deposit_Money,Withdraw_Money,Input;
    do{
        printf("\n===== ATM MENU =====\n1.Check Balance\n2.Deposit Money\n3.Withdraw Money\n4.Exit\n");
    printf("Enter your Choice = ");
    scanf(" %d", &Input);
    switch(Input){
        case 1:
        printf("Current balance = %d\n",Check_Balance);
        break;
        case 2:
            printf("Enter deposit amount =");
            if(scanf("%d",&Deposit_Money)!=1){
                printf("Invalid amount");
            }
           else if(Deposit_Money > 0){
                printf("Deposit successful\n");
                printf("Current balance = %d",Check_Balance += Deposit_Money);
        }
        else{
            printf("Invalid amount");
        }
        break;
        case 3:
        printf("Enter withdrawal amount =");
        if(scanf(" %d", &Withdraw_Money)!=1){
            printf("Invalid amount");
        }
        else if(Withdraw_Money>Check_Balance){
            printf("Insufficient balance\n");
        }
        else if(Withdraw_Money>0 && Withdraw_Money<=Check_Balance){
            printf("Withdrawal successful\n");
            printf("Current balance =%d",Check_Balance-=Withdraw_Money);
        }
        else{
            printf("Invalid amount");
        }
        break;
        case 4:
        printf("Thank you for using our ATM");
        break;
        default:
        printf("Invalid Choice");
        break;
        }
    }while(Input !=4);
        return 0;
}
