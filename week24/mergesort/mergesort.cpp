// #include <iostream>
#include "cpluspluslabs.h"
// using namespace std;

// void merge_sort(int arr[], int left, int right);

// int main()
// {
//     int arr[] = {19, 2, 20, 1, 0, 18};
//     merge_sort(arr, 0, 5);
//     printArr(arr, 6);
//     return 0;
// }

void merge_sort(int arr[], int left, int right)
{
    int mid;

    if (left == right)
    {
        return;
    }
    else
    {
        mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// void merge(int arr[], int left, int mid, int right)
// {
//     int i, iArr;
//     int iLeft, iRight, iCurr, size;
//     size = (right - left) + 1;
//     int *mergedArr = new int[size];

//     iLeft = left;
//     iRight = mid + 1;
//     iCurr = 0;

//     while (iLeft <= mid && iRight <= right)
//     {
//         if (arr[iLeft] < arr[iRight])
//         {
//             mergedArr[iCurr] = arr[iLeft];
//             iLeft++;
//             iCurr++;
//         }
//         else
//         {
//             mergedArr[iCurr] = arr[iRight];
//             iRight++;
//             iCurr++;
//         }
//     }

//     // check remaining numbers
//     while (iLeft <= mid)
//     {
//         mergedArr[iCurr] = arr[iLeft];
//         iLeft++;
//         iCurr++;
//     }
//     while (iRight <= right)
//     {
//         mergedArr[iCurr] = arr[iRight];
//         iRight++;
//         iCurr++;
//     }

//     // copy new merged array over
//     for (i = 0, iArr = left; i < size; i++, iArr++)
//     {
//         arr[iArr] = mergedArr[i];
//     }

//     delete[] mergedArr;
// }

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
