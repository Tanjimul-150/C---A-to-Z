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

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
}

// Function to reverse the linked list
void reverseList(Node** head) {
    Node* prev = nullptr;
    Node* curr = *head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;   // Store next node
        curr->next = prev;   // Reverse current node's pointer
        prev = curr;         // Move prev to current
        curr = next;         // Move curr to next
    }

    *head = prev;  // Update head pointer
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

    cout << "Original linked list:\n";
    printList(head);

    reverseList(&head);

    cout << "Reversed linked list:\n";
    printList(head);

    return 0;
}
