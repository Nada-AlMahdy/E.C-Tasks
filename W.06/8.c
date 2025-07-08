#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *months[]={"January", "February", "March", "April", "May", "June",
                  "July", "August", "September", "October", "November",
                  "December"};
    int m,d,y;
    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&m,&d,&y);
    if(m>=1 && m<=12)
       printf("The date you entered is %s %d , %d\n",months[m-1],d,y);
    else
        printf("Invalid date!\n");
    return 0;
}
