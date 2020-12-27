// #include <iostream>
// using namespace std;

// void addOne(int *ptrNum);

// int main()
// {
//     int num = 10;
//     int *ptrNum = &num;
//     addOne(ptrNum);
//     return 0;
// }

void addOne(int *ptrNum)
{
    *ptrNum += 1;
    cout << *ptrNum << endl;
}