#include <iostream>
using namespace std;

// Circular Link List

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class CircularDoublyLinkedList {
private:
    Node* head;

public:
    CircularDoublyLinkedList() {
        head = nullptr;
    }

    // Insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);

        // Empty list
        if (head == nullptr) {
            head = newNode;
            head->next = head;
            head->prev = head;
            return;
        }

        Node* last = head->prev;

        newNode->next = head;
        newNode->prev = last;

        last->next = newNode;
        head->prev = newNode;

        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        // Empty list
        if (head == nullptr) {
            head = newNode;
            head->next = head;
            head->prev = head;
            return;
        }

        Node* last = head->prev;

        newNode->next = head;
        newNode->prev = last;

        last->next = newNode;
        head->prev = newNode;
    }

    // Delete from beginning
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        // Only one node
        if (head->next == head) {
            delete head;
            head = nullptr;
            return;
        }

        Node* last = head->prev;
        Node* temp = head;

        head = head->next;

        head->prev = last;
        last->next = head;

        delete temp;
    }

    // Delete from end
    void deleteFromEnd() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        // Only one node
        if (head->next == head) {
            delete head;
            head = nullptr;
            return;
        }

        Node* last = head->prev;
        Node* secondLast = last->prev;

        secondLast->next = head;
        head->prev = secondLast;

        delete last;
    }

    // Display forward
    void displayForward() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        do {
            cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(back to head)\n";
    }

    // Display backward
    void displayBackward() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }

        Node* last = head->prev;
        Node* temp = last;

        do {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        } while (temp != last);

        cout << "(back to last)\n";
    }
};

int main() {
    CircularDoublyLinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    cout << "Forward: ";
    list.displayForward();

    cout << "Backward: ";
    list.displayBackward();

    list.insertAtBeginning(5);

    cout << "\nAfter inserting 5 at beginning:\n";
    list.displayForward();

    list.deleteFromBeginning();

    cout << "\nAfter deleting from beginning:\n";
    list.displayForward();

    list.deleteFromEnd();

    cout << "\nAfter deleting from end:\n";
    list.displayForward();

    return 0;
}