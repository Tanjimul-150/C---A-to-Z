#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40, 50};

    // Remove element at index 2
    auto it = myList.begin();
    advance(it, 2);        // Move to index 2
    myList.erase(it);      // Erase element at index 2

    // Insert 15 at index 1
    it = myList.begin();
    advance(it, 1);        // Move to index 1
    myList.insert(it, 15); // Insert 15

    // Remove the first element
    myList.pop_front();

    // Display final list
    cout << "Final list: ";
    for (int val : myList)
        cout << val << " ";
    cout << endl;

    return 0;
}
