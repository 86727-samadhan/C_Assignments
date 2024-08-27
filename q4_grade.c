#include <stdio.h>

void accept_marks(int *p, int size)
{
    int i;
    printf("Enter the subject marks: ");
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the marks of subject-%d: ", i + 1);
        scanf("%d", &p[i]);
    }
}

void display_array(int *p, int size)
{
    int i;
    printf("\nSubject marks are: ");
    for (i = 0; i < size; i++)
    {
        printf("\nMarks of subject-%d is %d", i + 1, p[i]);
    }
}

int calculate_total(int *p, int size)
{
    int total = 0, i;
    for (i = 0; i < size; i++)
    {
        total = total + p[i];
    }
    return total;
}

char calculate_grade(float avg)
{
    if (avg >= 90)
        return 'E';
    else if (avg >= 80)
        return 'A';
    else if (avg >= 70)
        return 'B';
    else if (avg >= 60)
        return 'C';
    else
        return 'F';
}

int main()
{
    int marks[5], i, total_marks;
    float average;
    char grade;
    accept_marks(marks, 5);
    display_array(marks, 5);
    total_marks = calculate_total(marks, 5);
    average = total_marks / 5.0;
    grade = calculate_grade(average);

    printf("\nTotal marks: %d", total_marks);
    printf("\nAverage: %.2f", average);
    printf("\nGrade: %c", grade);
    return 0;
}