#include <stdio.h>
#include <stdlib.h>
int Count_Digits(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Number of digits in %d = %d\n",num,Count_Digits(num));
    return 0;
}
int Count_Digits(int n)
{
    int count=0;
    do
    {
       count++;
       n/=10;
    }while(n!=0);
    return count ;
}
