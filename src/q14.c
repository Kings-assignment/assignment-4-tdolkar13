// Write a C program that counts the number of characters, words, and lines in a text file.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("Error: Could not open file.\n");
        exit(1);
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        characters++;

        if (ch == '\n')
        {
            lines++;
        }

        if (isspace(ch))
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            words++;
        }
    }

    if (characters > 0 && ch != '\n')
    {
        lines++;
    }

    fclose(fptr);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
