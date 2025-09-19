#include <iostream>
#include <cmath> // For ceil function
using namespace std;
int main() 
{
    int T;
    cin >> T; // Number of test cases
    for (int caseNumber = 1; caseNumber <= T; caseNumber++) 
    {
        long long income;
        cin >> income;
        double tax = 0;
        if (income > 180000) 
        {
            income -= 180000;

            if (income > 300000) 
            { 
                tax += 300000 * 0.10; income -= 300000; 
            }
            else 
            { 
                tax += income * 0.10; income = 0; 
            }

            if (income > 400000) 
            { 
                tax += 400000 * 0.15; income -= 400000; 
            }
            else 
            { 
                tax += income * 0.15; income = 0; 
            }
            if (income > 300000) 
            { 
                tax += 300000 * 0.20; income -= 300000; 
            }
            else 
            { 
                tax += income * 0.20; income = 0; 
            }

            if (income > 0) 
            { 
                tax += income * 0.25; 
            }
        }
        if (tax > 0 && tax < 2000) tax = 2000;
        cout << "Case " << caseNumber << ": " << (long long)ceil(tax) << endl;
    }
    return 0;
}
