#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int n;
    cout << "How many numbers? ";
    cin >> n;

    int arr[100];
    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(result, arr[i]);
    }
    int resultlcm = arr[0];
    for (int i = 0; i < n; i++)
    {
        resultlcm = lcm(resultlcm, arr[i]);
    }
    cout << "GCD of the numbers is: " << result << endl;
    cout << "Lcm for three number is: " << resultlcm << endl;
    return 0;
}
