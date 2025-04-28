#include <stdio.h>
#include <stdlib.h>
void Login(int, int, int);
int main()
{
    int ID , crctID=1234 , crctpass=5678;
    printf("Enter your ID : ");
    scanf("%d",&ID);
    Login(ID,crctID,crctpass);
    return 0;
}
void Login(int ID , int crctID , int crctpass)
{
    int pass , tries=3;
    if(ID==crctID)
    {
        while(tries>0)
        {
            printf("Enter password : ");
            scanf("%d",&pass);
            if(pass==crctpass)
            {
                printf("Welcome back!\n");
                break;
            }
            else
            {
                if(tries>1)
                printf("Wrong password, try again.\n");
                tries--;
            }
        }
        if(tries==0)
            printf("Limit reached! Try again later.\n");
    }
    else
        printf("Invalid ID!\n");
}
