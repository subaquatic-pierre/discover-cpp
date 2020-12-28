// #include <iostream>
// using namespace std;

// int binary_search(int search_val, int lst[], int elements);

// int main()
// {
//     int arr[] = {0, 1, 2, 18, 19, 20, 25};
//     int numComps;
//     int num;

//     cout << "Enter value to search for: ";
//     cin >> num;

//     numComps = binary_search(num, arr, 7);
//     cout << "Num of comparisons was: " << numComps << endl;
//     return 0;
// }

int binary_search(int search_val, int lst[], int elements)
{
    int numComps = 0;
    int mid = elements / 2;
    for (int i = 0; i < elements; i++)
    {
        cout << mid << endl;
        numComps++;
        if (lst[mid] == search_val)
        {
            break;
        }
        if (mid == 0 || mid == elements - 1)
        {
            break;
        }
        if (lst[mid] > search_val)
        {
            mid /= 2;
        }
        else if (lst[mid] < search_val)
        {
            mid += (elements - mid) / 2;
        }
    }
    return numComps;
}
