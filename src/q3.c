// Write a C program that checks if a given string is a palindrome using pointers.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str)
{
    char *ptrStart = str;
    char *ptrEnd = str + strlen(str) - 1;

    while (ptrEnd > ptrStart)
    {
        if (*ptrStart != *ptrEnd)
        {
            return false;
        }
        ptrStart++;
        ptrEnd--;
    }
    return true;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str))
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}