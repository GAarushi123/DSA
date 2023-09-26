#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || row == 4)
            {
                cout << col + 1;
            }
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (row == 1)
            {
                if (col % 2 == 0)
                {
                    if (col == 0)
                    {
                        cout << 1;
                    }
                    else
                    {
                        cout << row + 1;
                    }
                }
                else
                {
                    cout << " ";
                }
            }
        }
        for (int col = 0; col < row + 2; col++)
        {
            if (row == 2 || row == 3)
            {
                if (col == 0)
                    cout << 1;
                else if (col == row + 1)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}