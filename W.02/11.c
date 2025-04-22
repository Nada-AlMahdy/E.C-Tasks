#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height , i , j , k ;
    printf("Enter pyramid height : ");
    scanf("%d",&height);
    for(i=1;i<=height;i++)
    {
        for(k=1;k<=height-i;k++)
            printf(" ");
        for(j=1;j<=i*2-1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
