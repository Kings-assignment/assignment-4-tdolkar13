// Write a C program that defines a structure called Student with members: name, roll number,
// and marks. Prompt the user to enter data for one student and display the information.
#include <stdio.h>
struct Student
{
    char name[50];
    int roll_number;
    float marks;
};

int main()
{
    struct Student s;
    printf("Enter student's name: ");

    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Information ---\n");
    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}