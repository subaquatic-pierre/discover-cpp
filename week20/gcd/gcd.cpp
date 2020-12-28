#include <iostream>
using namespace std;

int gcd(int x, int y);

int main()
{
    int x, y;
    cout << "Enter 2 digits seperated by a space: ";
    cin >> x >> y;
    cout << gcd(x, y) << endl;
    return 0;
}

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}