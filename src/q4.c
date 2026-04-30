// Write a C program that dynamically allocates memory for an integer array of size n, where n is entered by the user. Prompt the user to enter n elements and display them using pointers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("\nThe elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    free(ptr);

    return 0;
}