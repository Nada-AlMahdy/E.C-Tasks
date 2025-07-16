#include <stdio.h>
#include <stdlib.h>
#define CHECK(x,y,n) ((x>=0 && x<n) && (y>=0 && y<n))
#define MEDIAN(x,y,z) (x>y?x<z?x:z>y?z:y:x>z?x:z>y?y:z)
#define POLYNOMIAL(x) (3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6)

int main()
{
    int x=7, y=13, z=9, n=14;
    printf("%d & %d fall between 0 and %d inclusive ? %d\n",x,y,n-1,CHECK(x,y,n));
    printf("Median of %d, %d, %d is %d\n",x,y,z,MEDIAN(x,y,z));
    printf("Polynomial(%d) =  3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6 = %d\n",x,POLYNOMIAL(x));
    return 0;
}
