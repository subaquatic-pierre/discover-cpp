#include <iostream>
using namespace std;

string remainingwords(string phrase);

int main()
{
    string inptStr;
    cout << "Enter a phrase: ";
    getline(cin, inptStr);
    cout << remainingwords(inptStr) << endl;
    return 0;
}

string remainingwords(string phrase)
{
    int idx = 0;
    string remainingwords;
    while (true)
    {
        char currChar = phrase[idx];
        if (idx >= phrase.length())
            break;
        if (currChar == 32)
        {
            for (int i = idx + 1; i < phrase.length(); i++)
            {
                currChar = phrase[i];
                remainingwords += currChar;
            }
            break;
        }
        idx++;
    }
    return remainingwords;
}