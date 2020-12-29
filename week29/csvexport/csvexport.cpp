#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void csv_export(string data[][3], int records, int columns, string filename);

int main()
{
    string data[][3] = {{"aspen", "olmsted", "aspen@pleasedonotemail.com"}, {"sally", "jones", "sally@gmail.com"}, {"fred", "smith", "fsmith@aol.com"}};
    csv_export(data, 3, 3, "customers.csv");
    return 0;
}

void csv_export(string data[][3], int records, int columns, string filename)
{
    ofstream file = ofstream(filename, ios_base::app);
    if (!file.bad())
    {
        for (int i = 0; i < records; i++)
        {
            string line = data[i][0] + "," + data[i][1] + "," + data[i][2] + "\n";
            file << line;
        }
    }
    else
    {
        cout << "This file could not be opened" << endl;
    }
}