#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_PASS 100
#define MINI_PASS 4

typedef struct
{
    char *name;
    int age;
    char gender[7];
    int ID;
    char *password;
    float grade;
}student;

int choice=0, i ;
student *students[MAX_STUDENTS];
char admin_password[MAX_PASS]="1234";
int students_count=0;

void main_menu(void);
void admin_mode(void);
void student_mode (void);
void add_student(void);
void remove_student(void);
void view_student(void);
void view_allstudents(void);
void edit_adminpass(void);
void edit_studentgrade(void);
void view_studentwid(student *);
void edit_studentpass(student *);
void edit_studentname(student *);
int foundid(int );

int main()
{
    printf("\033[1;34m=======Students Record System=======\033[0m\n");
    main_menu();
    return 0;
}

void main_menu(void)
{
    while(choice!=3)
     {
        printf("\033[1;33m\n=====Main Menu=====\033[0m\n");
        printf("1. Admin Mode\n2. Student Mode\n3. Exit\n");
        printf("Select an action : ");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice)
         {
           case 1: admin_mode(); break;
           case 2: student_mode(); break;
           case 3: printf("\033[1;32mExiting System Successfully Done.\033[0m\n"); break;
           default:
            printf("\033[1;31mInvalid choice!\033[0m\nTry again.\n\n");
         }
     }
}

void admin_mode(void)
{
    char temppass[MAX_PASS];
    int attempts=3;
    choice=0;
    while(attempts!=0)
       {
          printf("\nEnter Admin Mode password : ");
          fgets(temppass,MAX_PASS,stdin);
          temppass[strcspn(temppass, "\n")] = '\0';
          if(strcmp(temppass,admin_password)==0)
            {
              while(choice!=7)
               {
                 printf("\n\033[1;36m===Admin Menu===\033[0m\n");
                 printf("1. Add student record\n2. Remove student record\n3. View student record\n4. View all records\n5. Edit admin password\n6. Edit student grade\n7. Back to main menu\n");
                 printf("Select an action : ");
                 scanf("%d",&choice);
                 fflush(stdin);
                 switch (choice)
                  {
                   case 1: add_student(); break;
                   case 2: remove_student(); break;
                   case 3: view_student(); break;
                   case 4: view_allstudents(); break;
                   case 5: edit_adminpass(); break;
                   case 6: edit_studentgrade(); break;
                   case 7: printf("\n\033[1;33mGoing back to Main Menu...\033[0m\n"); break;
                   default:
                    printf("\033[1;31mInvalid choice!\033[0m Try again.\n");
                 }
               }
              return ;
           }
        else
           {
              printf("\033[1;31mInvalid password.\033[0m\n");
              attempts--;
              if(attempts)
                printf("Please, try again.\n");
           }
       }
    printf("\033[1;31mOops! You reached the limit of wrong passwords.\033[0m\n\033[1;33mReturning to main menu...\033[0m\n");
}

void student_mode (void)
{
    choice=0;
    int id, foundid=0;
    char pass[100];
    printf("\nEnter your ID : ");
    scanf("%d",&id);
    fflush(stdin);
    for(i=0;i<students_count;i++)
        if(id == students[i]->ID)
           {
            foundid=1;
            printf("Enter Your password : ");
            fgets(pass,100,stdin);
            pass[strcspn(pass, "\n")] = '\0';
            if(strcmp(pass,students[i]->password)==0)
              {
                while(choice!=4)
                    {
                       printf("\n\033[1;36m===Student Menu===\033[0m\n");
                       printf("1. View your record.\n2. Edit your password.\n3. Edit your name\n4. Back to main menu\n");
                       printf("Select an action : ");
                       scanf("%d",&choice);
                       fflush(stdin);
                       switch (choice)
                             {
                               case 1: view_studentwid(students[i]); break;
                               case 2: edit_studentpass(students[i]); break;
                               case 3: edit_studentname(students[i]); break;
                               case 4: printf("\033[1;33m\nGoing back to main menu...\033[0m\n"); break;
                               default:
                                printf("Invalid choice! Try again.\n");

                             }
                   }
                break;
              }
            else
              {
                printf("\033[1;31mWrong ID password.\n\033[0m\033[1;33mReturning to main menu...\n\033[0m");
                break;
              }
           }
    if(!foundid)
        printf("\033[1;31mThis ID is not registered.\n\033[0m\033[1;33mReturning to main menu...\n\033[0m");
}

void add_student(void)
{
    if(students_count<MAX_STUDENTS)
       {
         student *news=malloc(sizeof(student));
         char temp[100];
         printf("\nEnter new student data\n");
         printf("ID : ");
         scanf("%d",&news->ID);
         fflush(stdin);
         if(foundid(news->ID))
            {
             printf("\033[1;31mThis ID is already registered.\033[0m\n\033[1;36mReturning to admin menu...\033[0m\n");
             free(news);
             return;
            }
         printf("Name : ");
         fgets(temp,100,stdin);
         temp[strcspn(temp, "\n")] = '\0';
         news->name=malloc((strlen(temp))+1);
         strcpy(news->name,temp);
         printf("Age : ");
         scanf("%d",&news->age);
         fflush(stdin);
         printf("Gender (Male / Female): ");
         fgets(news->gender,7,stdin);
         news->gender[strcspn(news->gender, "\n")] = '\0';
         printf("Grade : ");
         scanf("%f",&news->grade);
         fflush(stdin);
         if((news->grade)<0 || (news->grade)>100)
            {
              printf("\033[1;31mInvalid grade.\033[0m\n\033[1;33mReturning to admin menu...\033[0m\n");
              free(news);
              return;
            }
         printf("Password : ");
         fgets(temp,MAX_PASS,stdin);
         temp[strcspn(temp, "\n")] = '\0';
         news->password=malloc((strlen(temp))+1);
         strcpy(news->password,temp);
         students[students_count]=news;
         students_count++;
         printf("\033[1;32mStudent added successfully.\n\033[0m");
       }
    else
       {
         printf("\033[1;31mStudents limit reached! You can not add anymore.\n\033[0m");
       }
}

void remove_student(void)
{
    int id;
    if(students_count==0)
       {
         printf("\033[1;31mNo registered students yet.\033[0m\n\033[1;36mReturning to admin menu...\033[0m\n");
         return;
       }
    printf("\nEnter Student ID to be removed : ");
    scanf("%d",&id);
    fflush(stdin);
    for(i=0;i<students_count;i++)
        if(students[i]->ID==id)
         {
            free(students[i]->name);
            free(students[i]->password);
            free(students[i]);
            for(int j=i;j<students_count - 1;j++)
               students[j]=students[j+1];
            students_count--;
            printf("\033[1;32mStudent removed successfully.\n\033[0m");
            return;
         }
    printf("\033[1;31mID is not found!\033[0m\n\033[1;36mReturning to admin menu...\033[0m\n");
}

void view_student(void)
{
    if(students_count == 0)
    {
        printf("\033[1;31mNo registered students yet.\033[0m\n\033[1;36mReturning to admin menu...\033[0m\n");
        return;
    }
    int id;
    printf("\nEnter Student ID to be viewed : ");
    scanf("%d",&id);
    fflush(stdin);
    for(i=0;i<students_count;i++)
        if(students[i]->ID==id)
          {
            printf("\033[1;32m\nStudent %d DATA\n\033[0m",id);
            printf("%-6s : %s\n","Name",students[i]->name);
            printf("%-6s : %d\n","Age",students[i]->age);
            printf("%-6s : %s\n","Gender",students[i]->gender);
            printf("%-6s : %.2f\n","Grade",students[i]->grade);
            return;
          }
     printf("\033[1;31mID is not found!\033[0m\n\033[1;36mReturning to admin menu...\033[0m\n");
}

void view_allstudents(void)
{
    if(students_count == 0)
    {
        printf("\033[1;31mNo registered students yet.\033[0m\n\033[1;36mReturning to admin menu...\033[0m\n");
        return;
    }

    printf("\033[1;32m\nRegistered Students Data\n\033[0m");
    printf("%-10s %-20s %-5s %-10s %-6s\n", "ID", "NAME", "AGE", "GENDER", "GRADE");
    printf("--------------------------------------------------------\n");
    for(i = 0; i < students_count; i++)
        printf("%-10d %-20s %-5d %-10s %-6.2f\n",students[i]->ID,students[i]->name,students[i]->age,students[i]->gender,students[i]->grade);
}

void edit_adminpass(void)
{
   char temppass[MAX_PASS];
   for(i=0;i<3;i++)
      {
        printf("\nEnter new password : ");
        fgets(temppass,MAX_PASS,stdin);
        temppass[strcspn(temppass, "\n")] = '\0';
        if(strlen(temppass)<MINI_PASS)
            {
              printf("\033[1;31mThis password is too short!\033[0m\n");
              if(i<2)
                 printf("Try again.\n");
              continue;
            }
        else
            {
              strcpy(admin_password,temppass);
              printf("\033[1;32mAdmin Password Updated Successfully.\033[0m\n");
              return;
            }
      }

   printf("\033[1;31mOops! You can not try anymore.\n\033[0m\033[1;36mReturning to admin menu...\033[0m\n");
}

void edit_studentgrade(void)
{
    int id;
    float ngrade;
    printf("\nEnter Student ID : ");
    scanf("%d",&id);
    fflush(stdin);
    for(i=0;i<students_count;i++)
        if(students[i]->ID==id)
         {
            printf("Enter new student grade : ");
            scanf("%f",&ngrade);
            fflush(stdin);
            if(ngrade<0 || ngrade>100)
              {
                printf("\033[1;31mInvalid grade!\033[0m\n\033[1;36mReturning to admin menu...\033[0m\n");
                return;
              }
            students[i]->grade=ngrade;
            printf("\033[1;32mGrade Updated Successfully.\033[0m\n");
            return;
         }
     printf("\033[1;31mID is not found!\033[0m\n\033[1;36mReturning to admin menu...\033[0m\n");
}

void view_studentwid(student *s)
{
    printf("\033[1;32m\nStudent %d Data\n\033[0m",s->ID);
    printf("%-6s : %s\n%-6s : %.2f\n%-6s : %d\n%-6s : %s\n","Name",s->name,"Grade",s->grade,"Age",s->age,"Gender",s->gender);
}

void edit_studentpass(student *s)
{
   char temppass[MAX_PASS];
   for(i=0;i<3;i++)
      {
        printf("\nEnter new password : ");
        fgets(temppass,MAX_PASS,stdin);
        temppass[strcspn(temppass, "\n")] = '\0';
        if(strlen(temppass)<MINI_PASS)
            {
              printf("\033[1;31mThis password is too short!\033[0m\n");
              if(i<2)
                 printf("Try again.\n");
              continue;
            }
        free(s->password);
        s->password = malloc(strlen(temppass)+1);
        strcpy(s->password,temppass);
        printf("\033[1;32mPassword Updated Successfully.\033[0m\n");
        return;
      }

   printf("\033[1;31m\nOops! You can not try anymore.\n\033[0m\033[1;36mReturning to student menu...\033[0m\n");
}

void edit_studentname(student *s)
{
    char tempname[100];
    printf("\nEnter new name : ");
    fgets(tempname,100,stdin);
    tempname[strcspn(tempname, "\n")] = '\0';
    free(s->name);
    s->name=malloc((strlen(tempname))+1);
    strcpy(s->name,tempname);
    printf("\033[1;32mName Updated Successfully.\033[0m\n");
}

int foundid(int id)
{
    for(i=0;i<students_count;i++)
        if(students[i]->ID==id)
           return 1;
    return 0 ;
}
