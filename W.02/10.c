#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID , pass , tries=0 ;
    printf("Enter your ID : ");
    scanf("%d",&ID);
    if(ID==1234)
    {
        while(tries<3)
        {
            printf("Enter your password : ");
            scanf("%d",&pass);
            if(pass==5678)
               {
                printf("Welcome!\n");
                break;
               }
            else
            {
                printf("You are not registered\n");
                tries++;
            }
        }
        if(tries==3)
        printf("No more tries\n");
    }
    else
        printf("You are not registered\n");
    return 0;
}
