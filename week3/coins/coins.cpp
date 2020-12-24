#include <iostream>
using namespace std;

const int CENTS_IN_DOLLAR = 100;

int main()
{
    int dollars, cents, totalDollars;
    int quaters, dimes, nickels, pennies, remainder;

    cout << "Please enter the amount of money to convert: " << endl;

    cout << "# of dollars: ";
    cin >> dollars;
    cout << "# of cents: ";
    cin >> cents;

    totalDollars = (dollars * CENTS_IN_DOLLAR) + cents;

    // check amount of quaters
    quaters = totalDollars / 25;
    remainder = totalDollars % 25;

    dimes = remainder / 10;
    remainder = remainder % 10;

    // check amount of pennies
    nickels = remainder / 5;
    pennies = remainder % 5;

    cout << "The coins are " << quaters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies" << endl;

    return 0;
}