#include <stdio.h>
struct student
{
    char name[40];
    int rollno;
    float marks;
} student[10];
int main()
{
    int i, n;
    printf("Enter how many student data do you want to add:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        printf("\nEnter student name:\n");
        scanf("%s", student[i].name);
        printf("Enter the student roll number:\n");
        scanf("%d", &student[i].rollno);
        printf("Enter the marks:\n");
        scanf("%f", &student[i].marks);
    }
    printf("\nstudent data:\n");

    for (int j = 0; j < n; j++)
    {

        printf("\nname:%s\nrollno:%d\nMarks:%f\n\n", student[j].name, student[j].rollno, student[j].marks);
    }
    return 0;
}
