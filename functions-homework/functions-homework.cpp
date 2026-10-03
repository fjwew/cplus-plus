#include <iostream>
using namespace std;

bool visokosniyYear(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int daysInMonthLeft(int day, int month, int year)
{
    year = visokosniyYear(year);
    int daysleft;
    if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)
    {
        daysleft = 31 - day;
        return daysleft;
    }
    else if (month == 4 or month == 6 or month == 9 or month == 11)
    {
        daysleft = 30 - day;
        return daysleft;
    }
    else if (month == 2 and year == false)
    {
        daysleft = 28 - day;
        return daysleft;
    }
    else if (month == 2 and year == true)
    {
        daysleft = 29 - day;
        return daysleft;
    }
}

void raznicaData(int day1, int month1, int year1, int day2, int month2, int year2)
{
    int year11 = visokosniyYear(year1);
    int year22 = visokosniyYear(year2);

    int daysleft1 = daysInMonthLeft(day1, month1, year1);

    for (int i = month1; i <= 12; i++)
    {
        if (i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12)
            if (i == month1)
                continue;
            else
                daysleft1 += 31;
        else if (i == 4 or i == 6 or i == 9 or i == 11)
            if (i == month1)
                continue;
            else
                daysleft1 += 30;
        else if (i == 2 and year11 == true)
            if (i == month1)
                continue;
            else
                daysleft1 += 29;
        else if (i == 2 and year11 == false)
            if (i == month1)
                continue;
            else
                daysleft1 += 28;
    }

    while (year1 < year2)
    {
        if (year1 % 4 != 0)
            daysleft1 += 355;
        else if (year1 % 4 == 0)
            daysleft1 += 366;
        year1++;
    }

    for (int i = 1; i < month2; i++)
    {
        if (i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12)
            if (i == month1)
                continue;
            else
                daysleft1 += 31;
        else if (i == 4 or i == 6 or i == 9 or i == 11)
            if (i == month1)
                continue;
            else
                daysleft1 += 30;
        else if (i == 2 and year11 == true)
            if (i == month1)
                continue;
            else
                daysleft1 += 29;
        else if (i == 2 and year11 == false)
            if (i == month1)
                continue;
            else
                daysleft1 += 28;
    }

    daysleft1 += day2;

    cout << daysleft1;
    
}








int main()
{
    raznicaData(27, 12, 2025, 14, 3, 2030);
}














