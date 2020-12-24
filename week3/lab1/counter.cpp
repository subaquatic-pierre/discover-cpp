#include <iostream>
using namespace std;

const int CENTS_IN_DOLLAR = 100;

int main()
{
    int quaters, dimes, nickels, pennies, total, totalDollar, totalCents;

    cout << "Please enter the number of coins:" << endl;
    cout << "# of quaters: ";
    cin >> quaters;
    cout << "# of dimes: ";
    cin >> dimes;
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;

    total = (quaters * 25) + (dimes * 10) + (nickels * 5) + pennies;

    totalDollar = total / CENTS_IN_DOLLAR;
    totalCents = total % CENTS_IN_DOLLAR;

    cout << "The total is " << totalDollar << " dollars and " << totalCents << " cents" << endl;

    return 0;
}