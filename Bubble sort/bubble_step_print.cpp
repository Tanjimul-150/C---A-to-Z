#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int total_swap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        cout << "Pass " << i + 1 << ": ";

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                total_swap++;
            }
        }

        for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
        cout << endl;

        if (!swapped)
        {
            cout << "Array is already sorted. Stopping early." << endl;
            break;
        }
    }

    cout << "Final sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Total swaps made: " << total_swap << endl;

    return 0;
}
