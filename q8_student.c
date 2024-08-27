#include <stdio.h>

typedef struct Student
{
    char roll_no[20];
    char name[20];
    int marks;
} Student;

Student accept_data(Student s)
{
    printf("Enter the roll number: ");
    scanf("%s", &s.roll_no);

    printf("Enter the name: ");
    scanf("%s", &s.name);
    fflush(stdin);

    printf("\nEnter the marks: ");
    scanf("%d", &s.marks);
    
    return s;
}

void display_data(Student s)
{
    printf("Roll number\tName\tMarks");
    printf("\n%s\t\t%s\t%d", s.roll_no, s.name,s.marks);
}

int main()
{
    Student s, s1;
    s1 = accept_data(s);
    display_data(s1);
    return 0;
}