#include <iostream>
using namespace std;

int main()
{

    int rows, i, j, col;

    cout << "Enter the number of rows and columns: ";
    cin >> rows >> col;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}