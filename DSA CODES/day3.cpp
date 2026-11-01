#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
      Node(int value) {
        data = value;
        next = nullptr;
      }
};

class LinkedList {
    public:
     Node *head;
    LinkedList() {
        head = nullptr;
    }

    void insertAtBegining(int value) {
        Node *newNode = new Node(value);
        newNode->next = head;
        head=newNode;
    }

    void insertAtEnd(int value) {
        Node *newNode = new Node(value);
        if(head==nullptr) {
            insertAtBegining(value);
            return;
        }
        Node *temp = head;
    while(temp->next!=nullptr) {
        temp = temp->next;
    }
      temp->next=newNode;
    }

    void insertAtPosition(int pos, int value) {
        Node *newNode = new Node(value);
        if(pos==0) {
            insertAtBegining(value);
            return;
        }
        Node *temp = head;
        for(int i = 1; i < pos && temp != nullptr; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next=newNode;
    }

    void displayData() {
        Node *temp = head;

        if(temp==nullptr) {
            cout << "List is Empty" << endl;
        }
      while (temp != nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
      }
    }

    void deleteAtBegining() {
        if(head==nullptr) {
            cout <<"List is Empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if(head==nullptr) {
            cout << "List is Empty" << endl;
            return;
        }
        Node *temp = head;
        while(temp->next->next!=nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteAtPosition(int pos)
    {
        if (head == nullptr)
        {
            cout << "List is Empty" << endl;
            return;
        }
        Node *temp = head;

        for (int i = 1; i < pos && temp != nullptr; i++)
        {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        Node *deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }

    void searchElem(int value)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            if (temp->data == value)
            {
                cout << "Element Found" << endl;
                break;
            }
            temp = temp->next;
        }
    }

    int sizeList()
    {
        int count = 0;
        Node *temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main()
{
    LinkedList l1;
    l1.insertAtBegining(45);
    l1.insertAtBegining(25);
    l1.insertAtBegining(80);
    l1.insertAtBegining(40);
    l1.insertAtEnd(89);
    l1.insertAtEnd(9);
    l1.insertAtPosition(1,85);
    l1.insertAtPosition(2, 100);

    // l1.deleteAtBegining();
    // l1.deleteAtEnd();

    // l1.deleteAtPosition(2);
    // l1.searchElem(85);
    cout << l1.sizeList();

    l1.displayData();

    return 0;
}