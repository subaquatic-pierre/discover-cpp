#include <iostream>
using namespace std;

int main()
{
    char inptChar;

    cout << "Enter a character: ";
    cin >> inptChar;

    if (inptChar >= 97 && inptChar <= 122)
    {
        cout << inptChar << " is a lower case letter." << endl;
    }
    else if (inptChar >= 65 && inptChar <= 90)
    {
        cout << inptChar << " is an uppercase letter." << endl;
    }
    else if (inptChar >= 48 && inptChar <= 57)
    {
        cout << inptChar << " is a digit." << endl;
    }
    else
    {
        cout << inptChar << " is  a non-alphanumeric  character." << endl;
    }

    return 0;
}