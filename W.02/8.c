#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , i ;
    printf("Enter an integer : ");
    scanf("%d",&num);
    printf("Multiplication table for %d :\n",num);
    for(i=1;i<=12;i++)
        printf("%d x %d = %d\n",num,i,num*i);
    return 0;
}
