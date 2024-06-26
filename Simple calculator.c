#include <stdio.h>
#include <conio.h>

void main()
{

   int num1,num2;
   char op;
   printf("enter the number1: ");
   scanf("%d",&num1);

   printf("enter the number2: ");
   scanf("%d",&num2);

   printf("enter the operator: ");
   scanf("\n %c", &op);

   if (op=='+')
   {
    printf("sum: %d" , num1 +num2);
   }
   else if (op== '-')
   {
    printf("sub: %d" , num1-num2);
   }
   else if (op== '*')
   {
    printf("multi: %d" , num1*num2);
   }
   else if (op== '/')
   {
    printf("div: %d" , num1/num2);
   }
   else
   {
    printf("invalid operator");
   }

     getch();

}