#include <iostream>
using namespace std;

const double KG_CONV = 0.453592;
const double MET_CONV = 0.0254;

int main()
{
    double weight, height, metHeight, bmi;

    cout << "Please enter weight in pounds: ";
    cin >> weight;
    cout << "Please enter height in inches: ";
    cin >> height;

    metHeight = height * MET_CONV;

    bmi = (weight * KG_CONV) / (metHeight * metHeight);
    printf("BMI is: %.2f\n", bmi);
    return 0;
}