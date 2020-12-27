#include <iostream>
using namespace std;

int main()
{
    string inputString, firstHalf, secondHalf;
    int inputLength, middleIndex;
    char middleChar, currChar;

    cout << "Enter an odd length string: ";
    getline(cin, inputString);

    inputLength = inputString.length();
    middleIndex = inputLength / 2;

    middleChar = inputString[middleIndex];

    for (int i = 0; i < middleIndex; i++)
    {
        firstHalf += inputString[i];
    }

    for (int i = middleIndex + 1; i < inputString.length(); i++)
    {
        secondHalf += inputString[i];
    }

    cout << "Middle character: " << middleChar << endl;
    cout << "First half: " << firstHalf << endl;
    cout << "Second half: " << secondHalf << endl;

    return 0;
}