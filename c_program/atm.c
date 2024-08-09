#include<stdio.h>
void main()
{
   int ATMPin=1234,Balance=1000000,count=1,Pin,amount;
   start:
   printf("\nenter atm pin");
   scanf("%d", &Pin);
   if (Pin==ATMPin)
   {
   printf("\nENTER WITHDRAWAL AMOUNT");
   scanf("%d", &amount);
   if (amount<=15000)
   {printf("\nPrevious balance %d", Balance);
    printf("\nWithdrawal amount%d", amount);
   printf("\nyour balance amount is%d", Balance-amount);
   }
   else
   printf("\nyour amount is larger than the limit enter amount less than or equals to 15000"); 
   }
   else{
   count++;
   if (count<=3)
   {printf("\nyour pin is incorrect \nPlease try again later");
   goto start;}
   else
   printf("your card has been blocked");
   }
 
}