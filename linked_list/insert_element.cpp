#include <iostream>
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

    // If list is empty
    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    // Traverse to the last node
    Node* temp = *head;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode; // Link the new node
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

    cout << "Enter number of nodes to insert: ";
    cin >> n;

    cout << "Enter node values:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insertAtEnd(&head, value);
    }

    cout << "Linked list after insertion:\n";
    printList(head);

    return 0;
}
