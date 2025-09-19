#include <iostream>
using namespace std;
const long long MOD = 1000000007;
long long reverseInBase(long long n, long long base) 
{
    long long reversedNumber = 0;
    while (n > 0) 
    {
        reversedNumber = reversedNumber * base + (n % base);
        n /= base;
    }
    return reversedNumber;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long n, k;
        cin >> n >> k;

        long long sum = 0;
        for (long long p = 2; p <= k; p++) 
        {
            sum = (sum + reverseInBase(n, p)) % MOD;
        }
        cout << sum << endl;
    }
    return 0;
}
