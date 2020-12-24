#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Please enter a positive integer: ";
    cin >> i;
    for (int n = 1; n <= i; n++)
    {
        int num = n * 2;
        cout << num << endl;
    }

    return 0;
}