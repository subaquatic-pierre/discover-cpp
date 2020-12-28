#include <iostream>
using namespace std;

int *check(int &num)
{
    if (num == 1)
    {
        return &num;
    }
    else
    {
        return nullptr;
    }
}

int main()
{
    int *inputNum;
    cout << "Enter number: ";
    int num;
    cin >> num;
    inputNum = &num;
    int cool = *check(*inputNum);

    cout << "The value of cool is: " << cool << endl;
    return 0;
}
