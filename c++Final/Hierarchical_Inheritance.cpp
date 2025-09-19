#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string name;
    int roll;
    float marks;

    // 🔽 ইনপুট নেওয়া
    cout << "Name: ";
    getline(cin, name);

    cout << "roll: ";
    cin >> roll;

    cout << "marks: ";
    cin >> marks;

    // 🔽 ফাইলে লেখা
    ofstream file("Student.txt");
    file << name << "," << roll << "," << marks << endl;
    file.close();

    // 🔽 ফাইল থেকে পড়া এবং দেখানো
    ifstream readFile("Student.txt");
    string line;
    getline(readFile, line);
    cout << "\n all information: " << line << endl;
    readFile.close();

    return 0;
}
