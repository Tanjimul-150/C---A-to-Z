#include <iostream>
using namespace std;
int main()
{
    while (1)
        {
        int N, M,i;
        cin >> N >> M;
        if (N <= 0 || M <= 0)
        {
            break;
        }
        int sum = 0;
        if (N > M)
        {
            int temp;
            temp = N;
            N = M;
            M = temp;
        }
        for (i = N; i <= M; ++i)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}

