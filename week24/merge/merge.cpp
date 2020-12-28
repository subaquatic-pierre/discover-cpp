// #include <iostream>
// #include "print_arr.h"
// using namespace std;

// void merge(int arr[], int left, int middle, int right);

// int main()
// {
//     int lst[] = {0, 2, 1, 18, 20};
//     merge(lst, 0, 1, 4);
//     printArr(lst, 5);
//     return 0;
// }

void merge(int arr[], int left, int mid, int right)
{
    int size = (right - left) + 1;
    int *mergedArr = new int[size];
    int iLeft, iRight, iCurr;
    iLeft = left;
    iRight = mid + 1;
    iCurr = 0;
    while ((iLeft <= mid) && (iRight <= right))
    {
        if (arr[iLeft] < arr[iRight])
        {
            mergedArr[iCurr] = arr[iLeft];
            iLeft++;
            iCurr++;
        }
        else
        {
            mergedArr[iCurr] = arr[iRight];
            iRight++;
            iCurr++;
        }
    }

    // check remaining numbers
    while (iLeft <= mid)
    {
        mergedArr[iCurr] = arr[iLeft];
        iLeft++;
        iCurr++;
    }
    while (iRight <= right)
    {
        mergedArr[iCurr] = arr[iRight];
        iRight++;
        iCurr++;
    }

    // copy new merged array over
    for (int i = 0; i <= size; i++)
    {
        arr[i] = mergedArr[i];
    }

    delete[] mergedArr;
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
