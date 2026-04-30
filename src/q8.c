// Write a C program that defines a structure Book with members: title, author, and price.
// Allow the user to enter details of n books and then display all books whose price is above a
// user-defined value.

#include <stdio.h>
#include <stdlib.h>

// Define the structure 'Book'
struct Book
{
    char title[100];
    char author[50];
    float price;
};

int main()
{
    int n, i;
    float priceThreshold;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book *b = (struct Book *)malloc(n * sizeof(struct Book));

    for (i = 0; i < n; i++)
    {
        printf("\n--- Enter details for Book %d ---\n", i + 1);
        getchar();

        printf("Title: ");
        fgets(b[i].title, sizeof(b[i].title), stdin);

        printf("Author: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);

        printf("Price: ");
        scanf("%f", &b[i].price);
    }
    printf("\nEnter the price threshold to filter books: ");
    scanf("%f", &priceThreshold);

    printf("\n--- Books priced above %.2f ---\n", priceThreshold);
    int found = 0;
    for (i = 0; i < n; i++)
    {
        if (b[i].price > priceThreshold)
        {
            printf("Title: %s", b[i].title);
            printf("Author: %s", b[i].author);
            printf("Price: %.2f\n", b[i].price);
            printf("---------------------------\n");
            found = 1;
        }
    }

    if (!found)
    {
        printf("No books found above the given price.\n");
    }

    free(b);

    return 0;
}