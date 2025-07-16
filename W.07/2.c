#include <stdio.h>
#include <stdlib.h>
#define SIZE_OF_ARRAY(arr) (sizeof(arr)/sizeof(arr[0]))
int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    printf("Number of elements of array : %d\n",SIZE_OF_ARRAY(arr));
    return 0;
}
