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

// Function to create a cycle for testing (connect last node to position pos)
void createCycle(Node* head, int pos) {
    if (pos == -1) return;
    Node* temp = head;
    Node* cycleNode = nullptr;
    int count = 0;

    while (temp->next != nullptr) {
        if (count == pos)
            cycleNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = cycleNode; // create cycle
}

// Function to detect and remove cycle
bool detectAndRemoveCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Detect cycle
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) { // cycle detected
            // Remove cycle
            slow = head;
            Node* prev = nullptr;
            while (slow != fast) {
                prev = fast;
                slow = slow->next;
                fast = fast->next;
            }
            prev->next = nullptr; // break the cycle
            return true;
        }
    }
    return false; // no cycle
}

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;
    int count = 0; // to avoid infinite loop if cycle exists
    while (temp != nullptr && count < 100) {
        cout << temp->data << " -> ";
        temp = temp->next;
        count++;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;
    int n, value, pos;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insertAtEnd(&head, value);
    }

    cout << "Enter position to create cycle (-1 for no cycle): ";
    cin >> pos;
    createCycle(head, pos);

    if (detectAndRemoveCycle(head))
        cout << "Cycle was detected and removed.\n";
    else
        cout << "No cycle detected.\n";

    cout << "Linked list after removing cycle (if any):\n";
    printList(head);

    return 0;
}
