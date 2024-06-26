#include <stdio.h>
#include<conio.h>
#include<math.h>

void main()

{
    int i,j,n,flag;

    printf("enter the value of n : ");
    scanf("%d" ,&n);
    
    for ( j = 1; j <=n; j++)
    {

        if (j==1)
            {
            printf("not a prime number \n");
            continue;
            }
     
        flag=0;
        for  (i = 2; i < j ;i++)
        {
          if (j%i !=0) {
          continue;     

                }
            else
            {
            flag = 1;
            printf("not a prime number \n");
            break;
            }   
    
        }

        if(flag==0)
        {
            printf("prime number \n");
        }

    }

  getch();

}