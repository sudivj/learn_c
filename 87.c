#include <stdio.h>
#include "Monthdays.h"

int main()
{

    int day = 131, year = 1977;
    int result, value, count = 1, month, days, pass = 11;
    value = value + monthd(year, count);

    for (int i = 0; i < pass; i++)
    {
        if (value < day)
        {
            if ((value + monthd(year, count + 1)) > day)
            {
                pass = 1;
            }
            else
            {
                count++;
                value = value + monthd(year, count);
            }
        }
    }
    days = day - value;
    if (days == 0)
    {
        days = 1;
        count = count + 1;
    }
    else
    {
        count = count + 1;
    }

    //printf("%d",value);
    //printf("%d", count);
    //printf("%d", days);

    return 0;
}