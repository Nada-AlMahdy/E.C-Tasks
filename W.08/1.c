#include <stdio.h>
#include <stdlib.h>
struct employee
{
  float salary, bonus, deductions;
};
int main()
{
    struct employee e[3];
    char *names[3]={"Mohsen","Maged","Mariam"};
    float totalsalary=0, totalbonus=0, totaldeductions=0;
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter data of employee %s :\n",*(names+i));
        printf("Salary > ");
        scanf("%f",&e[i].salary);
        printf("Bonus > ");
        scanf("%f",&e[i].bonus);
        printf("Deductions > ");
        scanf("%f",&e[i].deductions);
        printf("\n");
        totalsalary+=e[i].salary;
        totalbonus+=e[i].bonus;
        totaldeductions+=e[i].deductions;
    }
    printf("\nTotal Values\n==============\n");
    printf("Total Salary : %.2f\n",totalsalary);
    printf("Total Bonus : %.2f\n",totalbonus);
    printf("Total Deductions : %.2f\n",totaldeductions);
    return 0;
}
