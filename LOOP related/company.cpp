#include <iostream>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) 
    {
        int A, B, C;
        cin >> A >> B >> C;
        int middle;
        if ((A > B && A < C) || (A > C && A < B)) 
        {
            middle = A;
        } else if ((B > A && B < C) || (B > C && B < A)) 
        {
            middle = B;
        } 
        else 
        {
            middle = C;
        }
        cout << "Case " << i << ": " << middle << endl;
    }
    return 0;
}
