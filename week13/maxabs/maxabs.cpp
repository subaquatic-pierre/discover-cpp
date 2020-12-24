#include <iostream>
using namespace std;

int maxabsinlst(int list[], int len);

int main()
{
    int max;
    int lst[] = {-19, -3, 20, -1, 5, -25};

    max = maxabsinlst(lst, 6);

    printf("The maximum number is %i\n", max);

    return 0;
}

int maxabsinlst(int list[], int len)
{
    int max = 0;
    int curr;
    for (int i = 0; i < len; i++)
    {
        curr = list[i];

        if (curr < 0)
        {
            curr *= -1;
        }

        if (curr > max)
        {
            max = curr;
        }
    }

    return max;
}