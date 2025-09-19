#include <iostream>
using namespace std;
class box
{
    int length, width;

public:
    box(int l)
    {
        length = l;
        width = 100;
    }
    box(int l, int w)
    {
        length = l;
        width = w;
    }
    // public:
    void show()
    {
        cout << "Length: " << length << endl
             << "Width: " << width << endl;
    }
};
int main()
{
    //box b1,b2;
    box b1(10);
    box b2(10, 5);
    b1.show();
    b2.show();
    return 0;
}