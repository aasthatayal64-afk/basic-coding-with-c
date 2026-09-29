//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date in dd/mm/yyyy: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-Apr-%d", day, year);

    return 0;
}