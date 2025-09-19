#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

class Item
{
private:
    int item_id;
    string item_name;
    string manufacturer;
    double price;

public:
    Item()
    {
        item_id = 0;
        item_name = "";
        manufacturer = "";
        price = 0.0;
    }

    Item(int id, string name, string man, double p)
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
        cout << "ID: " << item_id << endl;
        cout << "Name: " << item_name << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Price: $" << price << endl;
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

void ApplyDiscount(Item &it, double discountPercent)
{
    double newPrice = it.getPrice() * (1 - discountPercent / 100);
    it.setPrice(newPrice);
}

int main()
{
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item items[n];

    for (int i = 0; i < n; i++)
    {
        int id;
        string name, man;
        double price;
        cout << "\nEnter details for item " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, name);
        cout << "Manufacturer: ";
        getline(cin, man);
        cout << "Price: ";
        cin >> price;

        items[i].set_item(id, name, man, price);
    }

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

            double discount;
            cout << "Enter discount percent: ";
            cin >> discount;
            ApplyDiscount(items[i], discount);

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
