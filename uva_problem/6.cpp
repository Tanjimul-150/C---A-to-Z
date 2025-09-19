#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long G, L;
        cin >> G >> L;

        if (L % G == 0)
            cout << G << " " << L << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
