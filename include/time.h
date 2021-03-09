#ifndef TIME_H
#define TIME_H


class timelib
{
public:

    int is_leapyear(int year);

    int get_days_of_month(int month, int year);

    int exists_date(int day, int month, int year);

    int day_of_the_year(int day, int month, int year);

protected:

private:
};

#endif // TIME_H
