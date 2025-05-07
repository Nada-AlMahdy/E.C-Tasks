#include <stdio.h>
#include <stdlib.h>
int find_scndl(int a[],int);
int main()
{
    int n , i , secondl;
    printf("Enter number of array elements(two numbers needed at least): ");
    scanf("%d",&n);
    int arr[n];
    if(n<=1)
        printf("Invalid number of elements for the process!\n");
    else
    {
        printf("Enter array elements :\n");
        for(i=0;i<n;i++)
           scanf("%d",&arr[i]);
        secondl=find_scndl(arr,n);
        printf("Second largest element is %d\n",secondl);
    }
    return 0;
}
int find_scndl(int a[],int n)
{
  int large , secondl;
  large=a[0];
  secondl=a[0];
  for(int i=1 ; i<n ;i++)
  {
      if(a[i]>large)
      {
          secondl=large;
          large=a[i];
      }
      else if (a[i]>secondl && a[i]!=large)
        secondl=a[i];
  }
  return secondl ;
}
