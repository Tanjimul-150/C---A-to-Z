#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Give me row and column: ";
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key, f = 0;
    cout << "Give me the key for door: ";
    cin >> key;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == key)
            {
                f = 1;
                cout << "Key found at position : " << "(" << i << "," << j << ")" << endl;
                break;
            }
        }
    }
    if (f != 1)
    {
        cout << "Not found key: try again." << endl;
    }
    return 0;
}