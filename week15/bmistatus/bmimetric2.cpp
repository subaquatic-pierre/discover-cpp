#include <iostream>
using namespace std;

double calcBMI(double weight, double height);
string getCategory(double bmi);

int main()
{
    double weight, height, bmi;
    string category;

    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height;

    bmi = calcBMI(weight, height);
    category = getCategory(bmi);

    cout << "BMI is: " << bmi << ", Status is " << category << endl;
    return 0;
}

double calcBMI(double weight, double height)
{
    double bmi;
    bmi = weight / (height * height);
    return bmi;
}

string getCategory(double bmi)
{
    if (bmi < 18.5)
    {
        return "Underweight";
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        return "Normal";
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        return "Overweight";
    }
    else if (bmi >= 30.0)
    {
        return "Obese";
    }
    else
    {
        return "Invalid type";
    }
}