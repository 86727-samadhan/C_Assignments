#include <stdio.h>
#include <string.h>

struct Employee
{
    char fname[20];
    char lName[20];
    double salary;
} Employee;

struct Employee emp_init(struct Employee);
struct Employee setSalary(struct Employee, double);
void displayEmployeeData();

struct Employee emp_init(struct Employee e)
{
    printf("Enter employee name : ");
    scanf(" %s", &e.fname);
    printf("Enter employee last name : ");
    scanf("%s", &e.lName);
    printf("Enter employee salary : ");
    scanf("%lf", &e.salary);
    return e;
}

struct Employee setSalary(struct Employee e, double sal)
{
    e.salary = sal * 12;
    return e;
}

double get_yearly_salary(struct Employee e)
{
    printf("\nEmployee yearly salary is : %0.2lf", e.salary * 12);

    return e.salary * 12;
}

void get_yearly_salary_with_gain(double sal)
{
    sal = sal + (sal / 10);
    printf("\nEmplyee yearly salary with 10%% gain : %.lf ", sal);
}

void displayEmployeeData(struct Employee e)
{
    printf("\nEmployee name is : %s", e.fname);
    printf("\nEmployee last name is : %s", e.lName);
}

int main()
{
    struct Employee e1;
    struct Employee e2 = emp_init(e1);

    displayEmployeeData(e2);

    double salary = get_yearly_salary(e2);

    get_yearly_salary_with_gain(salary);
}