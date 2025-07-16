#include <stdio.h>
#include <stdlib.h>
#define CUBE(x) (x*x*x)
#define REMINDER(n) (n%4)
#define PRODUCT(x,y) ((x*y)<100?1:0)
/*These macros may fail due to side effects if arguments have increments or function calls
  like using CUBE(x++),REMINDER(n++)..etc*/
int main()
{
   int x=10, y=3, n=100;
   printf("Cube of %d = %d\n",x,CUBE(x));
   printf("Reminder of %d = %d\n",n,REMINDER(n));
   printf("Is %d * %d <100?  %d\n",x,y,PRODUCT(x,y));
    return 0;
}
