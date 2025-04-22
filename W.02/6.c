#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans ;
    while(1)
    {
        printf("What is 3 x 4 ? : ");
        scanf("%d",&ans);
        if(ans==12)
        {
            printf("Thanks\n");
            break;
        }
        else
            printf("Try again\n");
    }
    return 0;
}
