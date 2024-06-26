#include <stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
    int n,copy,rev=0;

    printf("enter the value of n : ");
    scanf("%d" ,&n);
    copy=n;


    while (copy>0)
    {
        rev = rev*10;
        rev = rev + (copy%10);
        copy = copy/10;
    
    }

    if (n==rev)
    {
        printf("palindrome");
    }

    else
    {
        printf("not a palindrome");
    }
    
    

}