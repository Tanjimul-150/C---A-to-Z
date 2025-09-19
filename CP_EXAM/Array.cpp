//Array declaration
/*
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
//find element in array
/*
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int x = 5;
    bool found = false;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == x) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
*/
//Insert elemnet in array
/*
#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 4, 5, 6}; // Size increased to insert
    int n = 5, pos = 2, val = 3;

    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = val;
    n++;

    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
//erase element from array
/*
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5, pos = 2;

    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
//copy array
/*
#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int b[5];

    for(int i = 0; i < 5; i++) {
        b[i] = a[i];
    }

    cout << "Copied array: ";
    for(int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
*/
//Reverse array
/*
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0, end = 4;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
//Subarrays
/*
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};

    cout << "All subarrays: " << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = i; j < 3; j++) {
            for(int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
*/
//subsequence
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    int n = 3;

    cout << "All subsequences:" << endl;
    for(int mask = 0; mask < (1 << n); mask++) {
        for(int i = 0; i < n; i++) {
            if(mask & (1 << i)) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
*/