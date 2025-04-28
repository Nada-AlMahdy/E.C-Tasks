#include <stdio.h>
#include <stdlib.h>
int Get_Max(int , int);
int main()
{
    int num1 , num2 , max ;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    max=Get_Max(num1,num2);
    printf("Maximum number is %d\n",max);
    return 0;
}
int Get_Max(int a , int b)
{
    return ((a>b)?a:b);
}
