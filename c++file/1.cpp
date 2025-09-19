#include <iostream>
using namespace std;

template <typename T>
float CalculateAverage(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i)
        sum += arr[i];
    return static_cast<float>(sum) / size;
}

int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    double dblArr[] = {3.5, 4.7, 2.9, 6.1, 1.8};
    char charArr[] = {'A', 'B', 'C', 'D', 'E'};  // ASCII: 65–69

    cout << "Average of int array: " << CalculateAverage(intArr, 5) << endl;
    cout << "Average of double array: " << CalculateAverage(dblArr, 5) << endl;
    cout << "Average of char array (ASCII): " << CalculateAverage(charArr, 5) << endl;

    return 0;
}
