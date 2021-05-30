#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[30];
    char dname[30];
    int no;
    int salary;
} Employee; 
int main()
{
    int i, n=20;
    Employee employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
    {
        printf("\n\tEmployee %d:- ",i+1);
        printf("\n\tName: ");
        scanf("%s",employees[i].name);
        printf("\n\tNo: ");
        scanf("%d",&employees[i].no);
        printf("\n\tDepartment name:");
        scanf("%s", employees[i].dname);
        printf("\n\tSalary: ");
        scanf("%d",&employees[i].salary);
        printf("\n");
    }
    printf("---------- All Employees Details -----------\n");
    printf("\nName\t\tNo\t\tDepartment Name\t\tSalary");
    for(i=0; i<n; i++)
    {
        printf("\n%s\t\t%d\t\t%s\t\t%d",employees[i].name,employees[i].no,employees[i].dname,employees[i]. salary);
        printf("\n");
    }
    return 0;
}