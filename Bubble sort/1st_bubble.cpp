#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
    cout << "Sorted array: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}