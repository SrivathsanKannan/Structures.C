#include <stdio.h>

struct employee
{
    int age; 
    float salary;
    char name[20], number[20];
}emp[20];
 
int main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as name , phone number , age , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d %f", emp[i].name, emp[i].number, &emp[i].age, &emp[i].salary);
    }
    printf("\nName\t\tPhone Number\t\tAge\t\tSalary\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%s\t\t%d\t\t%f\n", emp[i].name, emp[i].number, emp[i].age, emp[i].salary);
    }
    return 0;
}
