#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=11, y=12, z=13;
    int *px=&x , *py=&y , *pz=&z;
    printf("x = %d, y = %d, z = %d\n",x,y,z);
    printf("px = %u, py =%u, pz = %d\n",px,py,pz);
    printf("*px = %d, *py = %d, *pz = %d\n",*px,*py,*pz);
    printf("\nSwapping Pointers...\n");
    pz = px;
    px = py;
    py = pz;
    printf("\nValues after swapping:\n======================\n");
    printf("x = %d, y = %d, z = %d\n",x,y,z);
    printf("px = %u, py =%u, pz = %d\n",px,py,pz);
    printf("*px = %d, *py = %d, *pz = %d\n",*px,*py,*pz);
    return 0;
}
