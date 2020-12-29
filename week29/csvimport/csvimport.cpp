// #include <fstream>
// #include <iostream>
// using namespace std;

// void csv_import(string data[][10], int columns, int *records, string filename);

// int main()
// {
//     int records;
//     string data[10][10]; // = {{"aspen", "olmsted", "aspen@pleasedonotemail.com"}, {"sally", "jones", "sally@gmail.com"}, {"fred", "smith", "fsmith@aol.com"}};

//     csv_import(data, 3, &records, "customers.csv");

//     for (int i = 0; i < records; i++)
//     {
//         cout << "Row: " << data[i][0] << " " << data[i][1] << " " << data[i][2] << endl;
//     }

//     cout << "Num of Records: " << records << endl;
//     return 0;
// }

void csv_import(string data[][10], int columns, int *records, string filename)
{
    int rowNum = 0;
    string line;
    ifstream file = ifstream(filename);

    if (!file.bad())
    {
        while (getline(file, line))
        {
            string cell;
            int col = 0;
            int lineLength = line.length();

            // Read contents into array
            // for (int i = 0; i < lineLength; i++)
            // {
            //     char curr = line[i];

            //     if (i == lineLength - 1) // End of line
            //     {
            //         cell += curr;
            //         data[rowNum][col] = cell;
            //         break;
            //     }
            //     else if (curr == ',') // End of col
            //     {
            //         data[rowNum][col] = cell;
            //         col++;
            //         cell = "";
            //     }
            //     else
            //     {
            //         cell += curr;
            //     }
            // }
            rowNum++;
        }
        file.close();

        *records = rowNum;
    }
}
