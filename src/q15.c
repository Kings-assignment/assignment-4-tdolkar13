// Write a C program that stores student records (name, roll number, and marks) into a
// file and then reads and displays all stored records.
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    FILE *fptr;
    int n, i;
    struct Student s;

    fptr = fopen("students.dat", "wb+");
    if (fptr == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d Name: ", i + 1);
        getchar();
        fgets(s.name, sizeof(s.name), stdin);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(struct Student), 1, fptr);
    }

    rewind(fptr);

    printf("\n--- Stored Student Records ---\n");
    while (fread(&s, sizeof(struct Student), 1, fptr))
    {
        printf("Name: %s", s.name);
        printf("Roll: %d\n", s.roll);
        printf("Marks: %.2f\n", s.marks);
        printf("---------------------------\n");
    }

    fclose(fptr);
    return 0;
}