#include <iostream>
using namespace std;

int main()
{
    int n, curr, prev, tmp;

    cout << "Please enter a positive integer greater than 1: ";
    cin >> n;

    tmp = 0;
    prev = 0;
    curr = 1;
    cout << curr << endl;
    for (int i = 0; i < n - 1; i++)
    {
        tmp = curr;
        curr = prev + curr;
        prev = tmp;
        cout << curr << endl;
    }

    return 0;
}