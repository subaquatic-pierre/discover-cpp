#include <iostream>
using namespace std;

// void swap(int *x, int *y);
// void printArr(int arr[], int len);

// int main()
// {
//     int arr[] = {19, 2, 20, 1, 0, 18};
//     int length = 6;

//     swap(&arr[0], &arr[1]);
//     printArr(arr, length);

//     return 0;
// }

void printArr(int arr[], int len)
{
    cout << "[";
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << ", ";
        }
    }
    cout << "]" << endl;
}

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}