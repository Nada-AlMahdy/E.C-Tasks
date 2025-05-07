#include<stdio.h>
#include <stdlib.h>
int find_repeating(int a[], int);
int main()
{
    int n, i, repeating;
    printf("Enter number of array elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0; i < n; i++)
        scanf("%d", &arr[i]);
    repeating=find_repeating(arr,n);
    if(repeating!=-254578625)
       printf("Repeating element : %d\n",repeating);
    else
       printf("No repeating element found!\n");
    return 0;
}
int find_repeating(int a[], int n)
{
    int i , j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[j]==a[i])
               return a[i];
    return -254578625;
}
