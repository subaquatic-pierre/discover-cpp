#include "cpluspluslabs.h"
// #include <iostream>
// using namespace std;

// void swap(int *x, int *y);
// void printArr(int arr[], int len);
// void selection_sort(int arr[], int len);

// const int ARR_LEN = 14;

// int main()
// {
//     int arr[] = {19, 2, 20, 1, 0, 18, 100, -68, 0, -98, 1000, 2, 8, 7};
//     selection_sort(arr, ARR_LEN);
//     printArr(arr, ARR_LEN);
//     return 0;
// }

// void swap(int *x, int *y)
// {
//     int tmp = *x;
//     *x = *y;
//     *y = tmp;
// }

void selection_sort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int min = arr[i];
        for (int y = i; y < len; y++)
        {
            if (min > arr[y])
            {
                min = arr[y];
                swap(&arr[i], &arr[y]);
            }
        }
    }
}

// void printArr(int arr[], int len)
// {
//     cout << "[";
//     for (int i = 0; i < len; i++)
//     {
//         if (i == len - 1)
//         {
//             cout << arr[i];
//         }
//         else
//         {
//             cout << arr[i] << ", ";
//         }
//     }
//     cout << "]" << endl;
// }