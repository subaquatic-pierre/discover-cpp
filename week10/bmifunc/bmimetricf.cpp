// #include <iostream>
// using namespace std;

// double bmimetricf(double weight, double height);

// int main()
// {
//     double weight, height, bmi;

//     cout << "Please enter weight in kilograms: ";
//     cin >> weight;
//     cout << "Please enter height in meters: ";
//     cin >> height;

//     bmi = bmimetricf(weight, height);
//     printf("BMI is: %.2f\n", bmimetricf(weight, height));
//     return 0;
// }

double bmimetricf(double weight, double height)
{
    double bmi;
    return bmi = weight / (height * height);
}
