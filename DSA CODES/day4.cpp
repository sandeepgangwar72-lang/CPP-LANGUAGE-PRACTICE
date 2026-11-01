#include <iostream>
using namespace std;

// Doubly Linked List

class Node
{

public:
    Node *prev;
    Node *next;
    int data;

    Node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    DoublyLinkedList()
    {
        head = nullptr;
    }

    void insertAtBegining(int value)
    {
        Node *newNode = new Node(value);
        if (head != nullptr)
        {
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
    }
    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void insertAtPosition(int pos, int value)
    {
        Node *newNode = new Node(value);
        if (pos == 0)
        {
            insertAtBegining(value);
            return;
        }
        Node *temp = head;
        for (int i = 1; i < pos && temp != nullptr; i++)
        {
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != nullptr)
            temp->next->prev = newNode;
        temp->next = newNode;
    }

    void deleteAtbegining()
    {
        if (head == nullptr)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        if (head != nullptr)
            head->prev = nullptr;
        delete temp;
    }

    void deleteAtEnd()
    {
        if (head == nullptr)
        {
            cout << "List is empty!" << endl;
            return;
        }

        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        temp->prev->next = nullptr;
        delete temp;
    }

    void deleteAtPosition(int pos)
    {
        if (pos == 0)
        {
            deleteAtbegining();
            return;
        }

        Node *temp = head;
        for (int i = 1; i <= pos && temp != nullptr; i++)
            temp = temp->next;

        if (temp == nullptr)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        if (temp->next != nullptr)
            temp->next->prev = temp->prev;

        if (temp->prev != nullptr)
            temp->prev->next = temp->next;

        delete temp;
    }

    int listSize()
    {
        int count = 0;
        Node *temp = head;
        if (head == nullptr)
        {
            cout << "List is Empty" << endl;
            return -1;
        }

        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    int searchElement(int value)
    {
        Node *temp = head;
        int count = 0;
        if (head == nullptr)
        {
            cout << "List is Empty" << endl;
            return -1;
        }
        while (temp != nullptr)
        {
            if (temp->data == value)
            {
                return count;
            }
            count++;
            temp = temp->next;
        }
        return -2;
    }

    void displayData()
    {
        Node *temp = head;
        if (head == nullptr)
        {
            cout << "List is Empty" << endl;
            return;
        }
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main()
{

    DoublyLinkedList d1;
    d1.insertAtBegining(45);
    // d1.insertAtBegining(23);
    // d1.insertAtBegining(56);
    d1.insertAtEnd(34);
    d1.insertAtEnd(23);
    d1.insertAtEnd(89);
    d1.insertAtEnd(74);

    cout << d1.searchElement(78) << endl;
    // d1.deleteAtPosition(1);
    // d1.deleteAtEnd();
    // d1.deleteAtEnd();
    // d1.insertAtPosition(2,567);
    // d1.insertAtPosition(4,222);
    // d1.deleteAtbegining();
    // d1.deleteAtbegining();
    // d1.displayData();
    // cout<<d1.listSize()<<endl;

    

    return 0;
}