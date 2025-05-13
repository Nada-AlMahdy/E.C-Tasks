#include <stdio.h>
#include <stdlib.h>
void bubble_sorting(int arr[], int);
int main()
{
    int n, i;
    printf("Enter number of array elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Array elements before sorting:\n==============================\n");
    for(i=0;i<n;i++)
        printf("%d\t",*(arr+i));
    bubble_sorting(arr,n);
    return 0;
}
void bubble_sorting(int arr[], int n)
{
    int i, j, temp;
    for(i=0;i<n-1;i++)
         for(j=0;j<n-i-1;j++)
             if(arr[j]>arr[j+1])
               {
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
               }

    printf("\nArray elements After sorting:\n=============================\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
