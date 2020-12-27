// #include <iostream>
// #include <vector>
// using namespace std;

// double *getDoubles(int numDoubles);

// int main()
// {
//     int num = 9;
//     double *r = getDoubles(num);
//     for (int i = 0; i < num; i++)
//     {
//         printf("%.2f\n", r[i]);
//     }
//     return 0;
// }

// vector<double> getDoubles(int numDoubles)
// {
//     vector<double> arr;
//     for (int i = 1; i <= numDoubles; i++)
//     {
//         arr.push_back((double)i / 3);
//     }
//     return arr;
// }

double *getDoubles(int numDoubles)
{
    double *arr = new double[numDoubles];
    for (int i = 1; i <= numDoubles; i++)
    {
        arr[i - 1] = (double)i / 3.00;
    }
    return arr;
}