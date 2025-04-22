#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c , max ;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    printf("%d is the maximum number\n",max);
    return 0;
}
