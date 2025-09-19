#include <iostream>
using namespace std;

long long sum(long long n)
{
    return n * (n + 1) / 2;
}

long long sum_even(long long n)
{
    long long count = n / 2;
    return count * (count + 1);
}

long long sum_odd(long long n)
{
    long long count = (n + 1) / 2;
    return count * count;
}

int main()
{
    long long A, B;
    cin >> A >> B;

    if (A > B)
        swap(A, B);

    long long total = sum(B) - sum(A - 1);
    long long even = sum_even(B) - sum_even(A - 1);
    long long odd = sum_odd(B) - sum_odd(A - 1);

    cout << total << "\n"
         << even << "\n"
         << odd << "\n";

    return 0;
}
