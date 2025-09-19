#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string m;
        cin >> m;
        int k = m.length() - 1;
        long long round_num = pow(10, k);
        long long num = stoll(m);
        cout << num - round_num << endl;
    }
    return 0;
}