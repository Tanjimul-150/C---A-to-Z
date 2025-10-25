#include <iostream>
using namespace std;
int main()
{
    int n, i, j, f = 0, t = 0, count = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Give me the value for search: ";
    cin >> k;
    for (i = 1; i < n; i++)
    {
        if (arr[i] == k)
        {
            // cout<<"The first occurance is at index: "<<i<<endl;
            f = i;
            t = 1;
            count++;
        }
    }
    if (t == 1)
    {
        cout << "Total occurrence is : " << count << endl;
        cout << "The last occurance is at index: " << f << endl;
    }
    else
    {
        cout << "No occurence happened" << endl;
    }
    return 0;
}