#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, arr[101], i, j, arr2[101];
        cin >> n;

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < n; i++)
        {
            arr2[i] = (n + 1) - arr[i];
        }

        for (i = 0; i < n; i++)
        {
            cout << arr2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}