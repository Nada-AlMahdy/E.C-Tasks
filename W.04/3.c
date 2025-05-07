#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, repeated;
    printf("Enter number of array elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Unique elements: ");
    for(i = 0; i < n; i++)
    {
        repeated=0;
        for(j = 0; j < i; j++)
        {
            if(arr[i]==arr[j])
              {
                  repeated=1;
                  break;
              }

        }
        if(!repeated)
            printf("%d ",arr[i]);

    }

    return 0;
}

