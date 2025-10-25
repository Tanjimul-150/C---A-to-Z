#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert node at the end
void insert(Node** head, int value) {
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

// Function to delete a node by key
void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = nullptr;

    // If head node itself holds the key
    if (temp != nullptr && temp->data == key) {
        *head = temp->next;
        delete temp;
        cout << "Node with key " << key << " deleted.\n";
        return;
    }

    // Search for the key
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key not found
    if (temp == nullptr) {
        cout << "Key " << key << " not found in the list.\n";
        return;
    }

    // Unlink the node
    prev->next = temp->next;
    delete temp;
    cout << "Node with key " << key << " deleted.\n";
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
    int n, value, key;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values:\n";
    for(int i = 0; i < n; i++) {
        cin >> value;
        insert(&head, value);
    }

    cout << "Linked list before deletion:\n";
    printList(head);

    cout << "Enter key to delete: ";
    cin >> key;

    deleteNode(&head, key);

    cout << "Linked list after deletion:\n";
    printList(head);

    return 0;
}
