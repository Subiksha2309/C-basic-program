#include <stdio.h>
#include <conio.h>

void main()
{

   int num;
   printf("enter the number: ");
   scanf("%d",&num);

if (num%2 ==0)
  {
    printf("even number");
  }
else if (num ==0)
{
    printf("zero");
}

else
{
    printf("odd number");
}
     getch();

}
