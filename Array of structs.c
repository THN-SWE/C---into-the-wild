#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[12];
    float gpa;
} Student;

int main()
{
    Student stu1 = {"Thulasikan", 4.0};
    Student stu2 = {"Sandy", 2.0};
    Student stu3 = {"Spongebob", 2.5};
    Student stu4 = {"T-rex", 3.0};

    Student students[] = {stu1, stu2, stu3, stu4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\t\n", students[i].gpa);
    }

    return 0;
}