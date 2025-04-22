#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , i=1 , fact=1 ;
    printf("Enter an integer : ");
    scanf("%d",&num);
    if(num>=0)
    {
      while(i<=num)
        {
            fact*=i;
            i++;
        }
      printf("Factorial of %d = %d\n",num,fact);
    }
    else
    printf("Error : factorial is not defined for negative integers!\n");
    return 0;
}
