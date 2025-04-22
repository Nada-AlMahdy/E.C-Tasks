#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary , hours ;
    printf("Enter your working hours : ");
    scanf("%f",&hours);
    salary = hours*50;
    if(hours<40)
        salary-= salary*0.1;
    printf("Your salary : %.2f LE\n",salary);
    return 0;
}
