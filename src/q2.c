// Write a C program that reverses an array of characters using pointers.
#include <stdio.h>

int main()
{
    char arr[] = "tenten";
    char *start = arr;
    int *end = arr;
    int length = 0;
    int temp;

    while (*(start + length) != '\0')
    {
        length++;
        end++;
    }
    printf("string is:%s\n", arr);
    return 0;
}