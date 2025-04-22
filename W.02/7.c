#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num , sum=0 , avg ;
    for(int i=1;i<=10;i++)
    {
        printf("Enter number %d : ",i);
        scanf("%f",&num);
        sum+=num;
    }
    avg=sum/10;
    printf("Sum = %.2f\nAverage = %.2f\n",sum,avg);
    return 0;
}
