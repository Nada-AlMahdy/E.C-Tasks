#include <stdio.h>
#include <stdlib.h>
int a=3 , b =4 ;
void swap(void)
{
    a=a^b;
    b=a^b;
    a=a^b;
}
int main()
{
    printf("Values before swapping : a = %d , b = %d\n",a,b);
    swap();
    printf("Values after swapping : a = %d , b = %d\n",a,b);
    return 0;
}
