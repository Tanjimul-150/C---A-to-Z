#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> generate_primes(int limit)
{
    vector<bool> is_prime(limit + 1, true);
    vector<int> primes;

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= limit; ++i)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = 2 * i; j <= limit; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    return primes;
}

void factorize(int n, const vector<int> &primes)
{
    int original = n;

    if (n == 0 || n == 1 || n == -1)
        return;

    vector<int> factors;
    if (n < 0)
    {
        factors.push_back(-1);
        n = -n;
    }

    for (int p : primes)
    {
        if (p * p > n)
            break;
        while (n % p == 0)
        {
            factors.push_back(p);
            n /= p;
        }
    }

    if (n > 1)
        factors.push_back(n);

    cout << original << " = " << factors[0];
    for (size_t i = 1; i < factors.size(); ++i)
    {
        cout << " x " << factors[i];
    }
    cout << endl;
}

int main()
{
    int n;
    vector<int> primes = generate_primes(46340);

    while (cin >> n && n != 0)
    {
        factorize(n, primes);
    }

    return 0;
}
