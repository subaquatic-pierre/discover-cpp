#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, odds, evens;

    odds = 0;
    evens = 0;

    cout << "Please enter 4 positive integers, seperated by a space: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 % 2 == 0)
        evens++;
    else
        odds++;

    if (num2 % 2 == 0)
        evens++;
    else
        odds++;

    if (num3 % 2 == 0)
        evens++;
    else
        odds++;

    if (num4 % 2 == 0)
        evens++;
    else
        odds++;

    if (odds > evens)
        cout << "more odds\n";
    else if (evens > odds)
        cout << "more evens\n";
    else
        cout << "same number of evens and odds\n";

    return 0;
}