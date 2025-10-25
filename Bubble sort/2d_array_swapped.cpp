#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter array elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];

    int total = rows * cols;

    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - i - 1; j++)
        {

            int row1 = j / cols, col1 = j % cols;
            int row2 = (j + 1) / cols, col2 = (j + 1) % cols;

            if (arr[row1][col1] > arr[row2][col2])
            {
                swap(arr[row1][col1], arr[row2][col2]);
            }
        }
    }

    cout << "Sorted 2D array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
