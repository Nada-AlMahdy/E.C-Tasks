#include <stdio.h>
#include <stdlib.h>
int sum(int *a, int *b);
int main()
{
    int val1, val2;
    printf("Enter two numbers to get their sum: ");
    scanf("%d %d",&val1,&val2);
    printf("Sum = %d\n",sum(&val1,&val2));
    return 0;
}
int sum(int *a, int *b)
{
    return *a + *b ;
}
