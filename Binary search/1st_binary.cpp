#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid;
    bool found = false;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            found = true;
            cout << "Element found at index " << mid << endl;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        cout << "Element not found in the array" << endl;

    return 0;
}
