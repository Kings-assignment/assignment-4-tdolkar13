// Write a C program to read the contents of a text file and display them on the screen.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;

    fptr = fopen("assignment.txt", "r");

    if (fptr == NULL)
    {
        printf("Error: Could not open file.\n");
        exit(1);
    }

    printf("Contents of the file:\n");
    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fptr);
    printf("\n");

    return 0;
}