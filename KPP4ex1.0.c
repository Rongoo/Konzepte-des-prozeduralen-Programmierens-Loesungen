#include <stdio.h>

int main()
{
    while (1)
    {
        int year = 0;
        printf("Please enter a Year: ");
        scanf("%d", &year);
        if (year % 4 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year", year);
            }
            else if (year % 100 == 0)
            {
                printf("%d is not a leap year", year);
            }
            else
            {
                printf("%d is a leap year", year);
            }
        }
        else
        {
            printf("%d is not a leap year", year);
        }
        printf("\n");
    }
    return 0;
}
