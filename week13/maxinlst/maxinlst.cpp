// #include <iostream>
// using namespace std;

// int maxinlst(int list[], int len);

// int main()
// {
//     int max;
//     int lst[] = {-19, -3, 20, -1, 5, -25};

//     max = maxinlst(lst, 6);

//     printf("The maximum number is %i\n", max);

//     return 0;
// }

int maxinlst(int list[], int len)
{
    int max = 0;
    for (int i = 0; i < len; i++)
    {
        if (list[i] > max)
        {
            max = list[i];
        }
    }

    return max;
}