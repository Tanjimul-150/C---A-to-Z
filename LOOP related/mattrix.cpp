#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the size of the matrix (m x m): ";
    cin >> m;
    int matrix[m][m];
    cout << "Enter the " << m << "x" << m << " matrix:\n";
    for (int i = 0; i < m; i++)
        {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "The " << m << "x" << m << " matrix is:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
