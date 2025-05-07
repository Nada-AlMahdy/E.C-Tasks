#include <stdio.h>
#include <stdlib.h>
void sort_array(int a[], int, int);
int main()
{
    int n , i , choice;
    printf("Enter number of array elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("In which order do you want the array to be sorted? (Enter 0 for ascending and 1 for descending): ");
    scanf("%d",&choice);
    printf("\nArray elements before sorting : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    sort_array(arr,n,choice);
    printf("\n\nArray elements after sorting : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
void sort_array(int a[], int n, int choice)
{
    int i ,j , temp;
    for(i=0;i<n-1;i++)
    {
      for(j=0;j<n;j++)
        {
            if((choice==0 && a[j]>a[i+1]) || (choice==1 && a[j]<a[i+1]))
              {
                temp=a[j];
                a[j]=a[i+1];
                a[i+1]=temp;
              }
        }
    }
}
