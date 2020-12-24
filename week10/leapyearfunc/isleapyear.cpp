// #include <iostream>
// using namespace std;

// bool isleapyear(int year);

// int main()
// {
//     int mybirthyear;
//     cout << "Please enter year of birth: ";
//     cin >> mybirthyear;
//     if (isleapyear(mybirthyear))
//     {

//         printf("Year %i  was a leap year\n", mybirthyear);
//     }
//     return 0;
// }

bool isleapyear(int year)
{
    if (year % 4 == 0)
    {
        if ((year % 100 != 0) || (year % 400 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}