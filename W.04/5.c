#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5][5] , i , j , rowsum=0 , colsum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter row %d : ",i+1);
        for(j=0;j<5;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("\nRow Totals : ");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            rowsum+=arr[i][j];
        printf("%d ",rowsum);
        rowsum=0;
    }
    printf("\nColumn Totals : ");
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
            colsum+=arr[i][j];
        printf("%d ",colsum);
        colsum=0;
    }
    return 0;
}
