#include <iostream>
using namespace std;

bool is_palindrome(string word);

int main()
{
    string word;
    bool check = false;
    cout << "Enter digits: ";
    cin >> word;

    check = is_palindrome(word);

    if (check == true)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}

bool is_palindrome(string word)
{
    if (word.length() == 1 || word.length() == 0)
    {
        return true;
    }
    else if (word[0] == word[word.length() - 1])
    {
        string newWord = word.substr(1, word.length() - 2);
        cout << "New word " << newWord << endl;
        return is_palindrome(newWord);
    }
    else
    {
        return false;
    }
}