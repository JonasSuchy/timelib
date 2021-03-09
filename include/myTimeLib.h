/*
Bibliothek mit Funktionen zur Berechnung der wievielte Tag im Jahr das gegebene Datum ist.
Autor: Jonas Suchy
Erstellt am: 09.03.2021
*/

#ifndef MYTIMELIB_H
#define MYTIMELIB_H

//Checks if the given year is a leapyear. -1 = Parameter not Valid. 0 = Not a leapyear. 1 = A leapyear.
int is_leapyear(int year);

//Returns the number of days of a given month. -1 = Parameter not valid.
int get_days_of_month(int month, int year);

//Returns if the date exists. 1 = date exists. 0 = date doesn't exist.
int exists_date(int day, int month, int year);

//Returns which day of the year a given date is. -1 = date out of range/ doesn't exist.
int day_of_the_year(int day, int month, int year);

#endif // MYTIMELIB_H
