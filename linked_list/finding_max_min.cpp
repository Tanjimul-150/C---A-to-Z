#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert node at the end
void insertAtEnd(Node** head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
}

// Function to find max and min
void findMaxMin(Node* head, int &maxVal, int &minVal) {
    maxVal = INT_MIN;
    minVal = INT_MAX;

    while (head != nullptr) {
        if (head->data > maxVal)
            maxVal = head->data;
        if (head->data < minVal)
            minVal = head->data;
        head = head->next;
    }
}

// Function to print linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insertAtEnd(&head, value);
    }

    cout << "Linked list:\n";
    printList(head);

    int maxVal, minVal;
    findMaxMin(head, maxVal, minVal);

    cout << "Maximum element: " << maxVal << endl;
    cout << "Minimum element: " << minVal << endl;

    return 0;
}
