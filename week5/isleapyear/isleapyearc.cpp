#include <iostream>
using namespace std;

int main()
{
    int year;

    cin >> year;

    if (year % 4 == 0)
    {
        if ((year % 100 != 0) || (year % 400 == 0))
        {
            cout << year << " was a leap year\n";
        }
        else
        {
            cout << year << " was not a leap year\n";
        }
    }
    else
    {
        cout << year << " was not a leap year\n";
    }

    return 0;
}