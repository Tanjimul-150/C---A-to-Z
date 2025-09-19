#include <iostream>
#include <iomanip>
using namespace std;

class shopitem
{
    int id;
    double price;

public:
    void setdata(int a, double b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << fixed << setprecision(2) << price << endl;
    }
};

int main()
{
    int size;
    cout << "Enter the size of objects: ";
    cin >> size;

    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;

    double p, q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id of item " << i + 1 << ": " << endl;
        cin >> p;
        cout << "Enter the price of item " << i + 1 << ": " << endl;
        cin >> q;
        ptr->setdata(p, q);
        ptr++;
    }

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Item no: " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}
