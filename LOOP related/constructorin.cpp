#include <iostream>
using namespace std;
class Something 
{
public:
    Something() 
    {
        cout << "Output:Default Constructor called!" << endl;
    }
};
int main() 
{
    Something obj;
    return 0;
}