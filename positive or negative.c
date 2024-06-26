#include <stdio.h>
#include <conio.h>

void main()
{

   int num;
   printf("enter the number: ");
   scanf("%d",&num);

   if (num>1)
   {
    printf("{num}  is positive");

   }

   else if (num==0)
   {
    printf("number is a zero");
   }
   
   
    else
    {
        printf("{num}  is a negative");
    }
     
}