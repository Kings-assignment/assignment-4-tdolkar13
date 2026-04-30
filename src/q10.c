// Write a C program that defines a structure Car with members: model, year, and mileage.
// Store information for 3 cars and find the car with the lowest mileage.
#include <stdio.h>

struct Car
{
    char model[50];
    int year;
    float mileage;
};

int main()
{
    struct Car c[3];
    int i, min_index = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Car %d Model: ", i + 1);
        if (i > 0)
            getchar();
        fgets(c[i].model, sizeof(c[i].model), stdin);

        printf("Year: ");
        scanf("%d", &c[i].year);

        printf("Mileage: ");
        scanf("%f", &c[i].mileage);
        printf("\n");
    }

    for (i = 1; i < 3; i++)
    {
        if (c[i].mileage < c[min_index].mileage)
        {
            min_index = i;
        }
    }

    printf("Car with the lowest mileage:\n");
    printf("Model: %s", c[min_index].model);
    printf("Year: %d\n", c[min_index].year);
    printf("Mileage: %.2f\n", c[min_index].mileage);

    return 0;
}