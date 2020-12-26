#include <iostream>
using namespace std;

const double STANDARD_RATE = 0.40;
const double NIGH_RATE = 0.25;
const double WEEKEND_RATE = 0.15;

bool getIsWeekDay(string day);

int main()
{
    int timeOfDay, callDuration;
    string day;
    double total, rate;
    bool isWeekDay;

    cout << "Enter the day the call started at: ";
    cin >> day;
    cout << "Enter the time the call started at (hhmm): ";
    cin >> timeOfDay;
    cout << "Enter the duration of the call (in minutes): ";
    cin >> callDuration;

    isWeekDay = getIsWeekDay(day);

    if (isWeekDay)
    {
        if (timeOfDay >= 800 && timeOfDay <= 1800)
        {
            rate = STANDARD_RATE;
        }
        else
        {
            rate = NIGH_RATE;
        }
    }
    else
    {
        rate = WEEKEND_RATE;
    }

    total = rate * callDuration;
    printf("This call will cost %.2f\n", total);

    return 0;
}

bool getIsWeekDay(string day)
{
    if (day == "Mon" || day == "Tue" || day == "Wed" || day == "Thr" || day == "Fri")
    {
        return true;
    }
    else
    {
        return false;
    }
}