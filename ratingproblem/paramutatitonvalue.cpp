#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp, b;
        int arr[100];
        int left = 1, right = n;
        int right = n;
        for (int i = 1; i <= n; i++)
        {
            arr[i] = n + i - n;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}