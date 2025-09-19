#include <iostream>
using namespace std;

long long comb[101][101];

void buildPascal()
{
    for (int i = 0; i <= 100; ++i)
    {
        comb[i][0] = comb[i][i] = 1;
        for (int j = 1; j < i; ++j)
            comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
    }
}

int main()
{
    buildPascal();

    int N, M;
    while (cin >> N >> M, N || M)
    {
        cout << N << " things taken " << M << " at a time is " << comb[N][M] << " exactly.\n";
    }

    return 0;
}
