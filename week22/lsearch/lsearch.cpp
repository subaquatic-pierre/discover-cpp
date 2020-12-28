// #include <iostream>
// using namespace std;

// int linear_search(int search_val, int lst[], int elements);

// int main()
// {
//     int arr[] = {19, 2, 20, 1, 0, 18};
//     int numComps;

//     numComps = linear_search(20, arr, 6);
//     cout << "Num of comparisons was: " << numComps << endl;
//     return 0;
// }

int linear_search(int search_val, int lst[], int elements)
{
    int numComps = 0;
    for (int i = 0; i < elements; i++)
    {
        numComps++;
        if (search_val == lst[i])
            break;
    }
    return numComps;
}