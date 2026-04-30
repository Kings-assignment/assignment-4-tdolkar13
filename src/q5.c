// Write a C program that dynamically allocates memory for a string entered by the user and finds its length using pointers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *arr;
    arr = (char *)malloc(100 * sizeof(char));

    if (arr == NULL)
    { // FIX 1: ( ) → { }
        printf("Failed to allocate memory.\n");
        return 1; // FIX 2: return 0 → return 1 (error code)
    }

    printf("Enter the string: ");
    scanf("%99s", arr); // FIX 3: "%s" → "%99s" (buffer overflow protection)

    char *start = arr;
    int length = 0;

    while (*(start + length) != '\0')
    {
        length++;
    }

    printf("Length of string is: %d\n", length);

    free(arr);
    return 0;
}