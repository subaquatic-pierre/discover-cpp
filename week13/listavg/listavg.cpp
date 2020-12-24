// #include <iostream>
// using namespace std;

// double avgoflst(int list[], int len);

// int main()
// {
//     int list[] = {19, 2, 20, 1, 0, 25};
//     double avg;

//     avg = avgoflst(list, 6);

//     printf("The average of the list is: %.2f\n", avg);

//     return 0;
// }

double avgoflst(int list[], int len)
{
    double avg = 0;
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        total += list[i];
    }
    avg = double(total) / double(len);
    return avg;
}