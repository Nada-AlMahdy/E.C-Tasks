#include <stdio.h>
#include <stdlib.h>
int sclrmulti(int a[], int b[], int);
int main()
{
    int n, i, result;
    printf("Enter number of elements of the arrays: ");
    scanf("%d",&n);
    int arr1[n] , arr2[n];
    printf("Enter first array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",arr1+i);
    printf("Enter second array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",arr2+i);
    result=sclrmulti(arr1,arr2,n);
    printf("Scalar Multiplication = %d\n",result);
    return 0;
}
int sclrmulti(int a[], int b[], int n)
{
    int res=0, i;
    for(i=0;i<n;i++)
        res+= *(a+i) * *(b+i);
    return res;
}
