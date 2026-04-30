// Write a C program to create a file and write a user-entered string into it. Then display a
// message confirming that the file has been written successfully.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char str[200];

    fptr = fopen("assignment.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }

    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fptr, "%s", str);

    fclose(fptr);

    printf("File has been written successfully.\n");

    return 0;
}