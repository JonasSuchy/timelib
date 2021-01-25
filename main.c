/*
Programm welches berechnet der wievielte Tag im Jahr das eingegebene Datum ist.
Autor: Jonas Suchy
Erstellt am: 11.01.2021
*/

#include <stdio.h>
#include <stdlib.h>

int is_leapyear(int year)
{
    if(year < 1582 || year > 2400)
    {
        return -1;
    }
    else if(year%4 == 0 && (!year%100 == 0 || year%400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int get_days_of_month(int month, int year)
{
    int tage_pro_Monat[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(month >= 1 && month <= 12)
    {
        if(month == 2)
        {
            int leapyear = is_leapyear(year);
            if(leapyear == 1)
            {
                tage_pro_Monat[1] = 29;
            }
            else if(leapyear == -1)
            {
                return -1;
            }
        }
        return tage_pro_Monat[month-1];
    }
    else
    {
        return -1;
    }
}

int exists_date(int day, int month, int year)
{
    if(year < 1582 || year > 2400 || month < 1 || month > 12 || day < 1 || day > get_days_of_month(month, year))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int day_of_the_year(int day, int month, int year)
{
    int zaehler = 0;
    int i = 1;
    if(!exists_date(day, month, year))
    {
        return -1;
    }
    while(i < month)
    {
        for(int j = 0; j < get_days_of_month(i, year); j++)
        {
            zaehler++;
        }
        i++;
    }
    for(int j = 0; j < day; j++)
    {
        zaehler++;
    }
    return zaehler;
}

int main()
{
    int Jahr, Monat, Tag;
    int Zaehler = 0;

    int tage_pro_Monat[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Geben Sie das Jahr ein\n");
    scanf("%i",&Jahr);
    printf("Geben Sie den Monat ein\n");
    scanf("%i",&Monat);
    printf("Geben Sie den Tag ein\n");
    scanf("%i",&Tag);

    int tage = day_of_the_year(Tag, Monat, Jahr);

    if(tage == -1)
    {
        printf("Ungueltige eingabe!");
    }
    else
    {
        printf("%ier Tag des Jahres.",tage);
    }

    return 0;
}
