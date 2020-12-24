#include <iostream>
using namespace std;

int main()
{
    double weight, height, bmi;

    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;

    bmi = weight / (height * height);
    printf("BMI is: %.2f\n", bmi);
    return 0;
}