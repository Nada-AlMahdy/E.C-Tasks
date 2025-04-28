#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int);
int main()
{
    int num , fibonum ;
    printf("Enter a number to get its Fibonacci : ");
    scanf("%d",&num);
    if(num>=0)
    {
      fibonum=Fibonacci(num);
      printf("Fibonacci of %d is %d\n",num,fibonum);
    }
    else
        printf("Invalid number!");

    return 0;
}
int Fibonacci(int n)
{
  if(n==0)
    return 0 ;
  if(n==1)
   return 1 ;
  return (Fibonacci(n-1)+Fibonacci(n-2));

}
