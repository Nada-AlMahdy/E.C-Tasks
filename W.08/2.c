#include <stdio.h>
#include <stdlib.h>
struct student
{
    int id;
    int grades[4];
};
int main()
{
    struct student students[10];
    char *subjects[4]={"Programming","Data Structures","Discrete Math","Algorithms"};
    int ID, choice=1, sub, newgrade, IDplace,foundID, i, j;
    for(i=0;i<10;i++)
    {
        students[i].id=100*i+3;
        for(j=0;j<4;j++)
            students[i].grades[j]=j+150/2;
    }
    while(1)
    {
        foundID=0;
        printf("Enter student ID : ");
        scanf("%d",&ID);
        for(i=0;i<10;i++)
        {
            if(ID == students[i].id)
            {
                foundID=1;
                IDplace=i;
                printf("Student Grades :\n===============\n");
                for(j=0;j<4;j++)
                    printf("%s : %d\n",subjects[j],students[IDplace].grades[j]);
                printf("\nDo you want to edit any grade? (1 for yes, 0 for no) : ");
                scanf("%d",&choice);
                if(choice)
                 {
                    printf("Choose the wanted subject (1-Programming 2-Data Structures 3-Discrete Math 4-Algorithms) : ");
                    scanf("%d",&sub);
                    if(sub>4 || sub<1)
                        printf("Invalid subject number!\n");
                    else
                     {
                       printf("Enter new grade : ");
                       scanf("%d",&newgrade);
                       students[IDplace].grades[sub-1]=newgrade;
                       printf("Grade Edited Successfully!\n");
                     }
                 }
            printf("\nDo you want to continue ? (1 for yes, 0 for no) : ");
            scanf("%d",&choice);
            if(!choice)
            break;
            }
        }
        if(!choice)
            break;
        if(!foundID)
            printf("Invalid ID! Please, try again.\n\n");
    }
    return 0;
}
