#include <iostream>
#include <string>
using namespace std;
class item
{
private:
    int item_id;
    string item_name;
    string manufacturer;
    double price;

public:
    item()
    {
        item_id = 2430;
        item_name = "Dairy milk";
        manufacturer = "Newzeland";
        price = 100.45;
    }
    item(int id, string name, string man, double p)
    {
        item_id = id;
        item_name = name;
        manufacturer = man;
        price = p;
    }
    void set_item(int id, string name, string man, double p)
    {
        this->item_id = id;
        this->item_name = name;
        this->manufacturer = man;
        this->price = p;
    }
    void display()
    {
        cout << "Id: " << item_id << endl
             << "Nmae: " << item_name << endl
             << "Company name: " << manufacturer << endl
             << "Product price: "
             << price << endl;
    }
    int getID()
    {
        return item_id;
    }
    double getPrice()
    {
        return price;
    }
    void setPrice(double p)
    {
        price = p;
    }
};
void applydiscount(item &it, double discount)
{
    double newprice = it.getPrice() * (1 - discount / 100);
    it.setPrice(newprice);
}
int main()
{
    int n, i;
    cout << "Enter the value of N: " << endl;
    cin >> n;
    item items[n];
    for (i = 0; i < n; i++)
    {
        int id;
        string name, man;
        double price;
        cout << "\nEnter details for item " << i + 1 << ":\n";
        cout << "Id: ";
        cin >> id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, name);
        cout << "Company name: ";
        getline(cin, man);
        cout << "Price: ";
        cin >> price;
        items[i].set_item(id, name, man, price);
    }
    cout << endl;
    int search_id;
    cout << "\nEnter ID to search: ";
    cin >> search_id;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (items[i].getID() == search_id)
        {
            cout << "\nItem Found:\n";
            items[i].display();
            double discount_price;
            cout << "Enter discount percent: ";
            cin >> discount_price;
            applydiscount(items[i], discount_price);

            cout << "\nAfter Discount:\n";
            items[i].display();
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Item not found.\n";
    }
    return 0;
}