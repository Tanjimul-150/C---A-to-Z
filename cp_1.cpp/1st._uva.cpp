#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int SIZE = 30;
    float numbers[SIZE], sum = 0.0;

    // Step 1: Write numbers to the file
    ofstream outFile("NUMBERS.txt");
    for (int i = 0; i < SIZE; ++i) {
        numbers[i] = i + 1.5f;  // Just sample values like 1.5, 2.5, ..., 30.5
        outFile << numbers[i] << endl;
    }
    outFile.close();

    // Step 2: Read numbers and compute average
    ifstream inFile("NUMBERS.txt");
    float val;
    int count = 0;
    while (inFile >> val) {
        sum += val;
        count++;
    }
    inFile.close();

    float average = sum / count;
    cout << "Average of numbers: " << average << endl;

    return 0;
}
