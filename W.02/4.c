#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d",&grade);
    if (grade >= 90)
        printf("Excellent\n");
    else if (grade >= 80)
        printf("Very Good\n");
    else if (grade >= 70)
        printf("Good\n");
    else if (grade >= 60)
        printf("Pass\n");
    else
        printf("Fail\n");
    return 0;
}
