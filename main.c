/*
Programm welches berechnet der wievielte Tag im Jahr das eingegebene Datum ist.
Autor: Jonas Suchy
Erstellt am: 11.01.2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <myTimeLib.h>

void input_date(int *day, int *month, int *year) //Reads the day, month and year via the console, and saves them in the pointers.
{
    printf("Enter year\n");
    scanf("%i",year);
    printf("Enter month\n");
    scanf("%i",month);
    printf("Enter day\n");
    scanf("%i",day);
}

int main()
{
    int Year, Month, Day;

    input_date(&Day, &Month, &Year);

    int days = day_of_the_year(Day, Month, Year);

    if(days == -1)
    {
        printf("Invalid Input!");
    }
    else
    {
        printf("%i. day of the year.", days);
    }

    return 0;
}
