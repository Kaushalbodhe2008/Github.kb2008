#include <stdio.h>

int main()
{
    int year, i, j, days, start;
    int monthDays[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};

    char *months[] = {"January", "February", "March", "April",
                      "May", "June", "July", "August",
                      "September", "October", "November", "December"};

    printf("Enter year: ");
    scanf("%d", &year);

    // Check leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        monthDays[1] = 29;

    // Calculate starting weekday (1 Jan, Gregorian calendar)
    days = (year - 1) * 365 + (year - 1) / 4
           - (year - 1) / 100 + (year - 1) / 400;

    start = (days + 1) % 7;  // 0 = Sunday

    for (i = 0; i < 12; i++)
    {
        printf("\n\n------ %s %d ------\n", months[i], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (j = 0; j < start; j++)
            printf("    ");

        for (j = 1; j <= monthDays[i]; j++)
        {
            printf("%3d ", j);

            if ((j + start) % 7 == 0)
                printf("\n");
        }

        printf("\n");

        start = (start + monthDays[i]) % 7;
    }

    return 0;
}