#include <stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
    int n ,c,digit=0 ,sum=0;

    printf("enter the value of n : ");
    scanf("%d" ,&n);
    c =n;


    while (c>0)
    {
        c = c/10;
        digit++;
    }
    
    c=n;

    while (c>0)
    {
        sum = sum + pow( (c%10) , digit);
        c = c/10;
    }

     if (sum==n)
     {
        printf("Amstrong number");
     }

     else
     {
        printf("not a amstrong number");
     }   
    
}