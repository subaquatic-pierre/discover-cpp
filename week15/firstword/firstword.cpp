#include <iostream>
using namespace std;

// string firstword(string phrase);

// int main()
// {
//     string inptStr;
//     cout << "Enter a phrase: ";
//     getline(cin, inptStr);
//     cout << firstword(inptStr) << endl;
//     return 0;
// }

string firstword(string phrase)
{
    char currChar;
    int idx = 0;
    string firstWord;
    while (true)
    {
        if (idx == phrase.length())
            break;
        currChar = phrase[idx];
        if (currChar == 32)
            break;
        firstWord += currChar;
        idx++;
    }
    return firstWord;
}