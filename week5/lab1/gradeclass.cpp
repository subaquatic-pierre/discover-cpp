#include <iostream>
using namespace std;

const double LOW_SCORE = 60.0;
const double HIGH_SCORE = 95.0;

int main()
{
    double grade1, grade2;

    cout << "Please enter 2 grade, separated by a space: ";

    cin >> grade1 >> grade2;

    if (grade1 < LOW_SCORE && grade2 < LOW_SCORE)
        cout << "Student Failed:(" << endl;
    else if (grade1 >= HIGH_SCORE && grade2 >= HIGH_SCORE)
        cout << "Student Graduated with Honors:)" << endl;
    else
        cout << "Student Graduated!\n";

    return 0;
}