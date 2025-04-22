#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID ;
    printf("Enter your ID : ");
    scanf("%d",&ID);
    switch (ID)
    {
     case 1234 :
        printf("Name : Harry \n");
        break;
     case 5678 :
        printf("Name : Ron \n");
        break;
     case 1145 :
        printf("Name : Hermione \n");
        break;
     default :
        printf("Wrong ID!\n");
    }
    return 0;
}
