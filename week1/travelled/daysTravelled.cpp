#include <iostream>
using namespace std;

int main()
{
    int inputDays;
    int weeks;
    int days;

    cout << "Please enter number of days travelled" << endl;
    cin >> inputDays;

    weeks = inputDays / 7;
    days = inputDays % 7;

    if (days > 0)
    {
        cout << "There are remaining days after your weeks" << endl;
        cout << "Your total travel time is " << weeks << " weeks and " << days << " day!" << endl;
    }
    else
    {
        cout << "Your total travel time was only " << weeks << " weeks!" << endl;
    }

    return 0;
}