#include <iostream>
using namespace std;

class Array {
    private:
      int *arr;
      int Capacity;
      int Length;
    
    public:
      Array(int size) {
        Capacity = size;
        arr = new int[Capacity];
        Length = 0;
      }
    void insertAtLast(int value) {
        arr[Length] = value;
        Length++;
    }

    void insertAtPosition(int pos, int value) {
        if(Length == Capacity) {
            cout << "Array is Full" << endl;
            return;
        }
        if(pos<0 || pos>Length) {
            cout << "Invalid Position" << endl;
            return;
        }
        for(int i = Length; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;
        Length++;
    }

    void display() {
        for(int i = 0; i < Length; i++) {
            cout << arr[i] << endl;
        }
    }

    int search(int value) {
        for (int i = 0; i < Length; i++) {
            if(arr[i] == value) {
                return 1;
            }
        }
        return 0;
    }

    void remove(int pos) {
        if(pos < 0 || pos >= Length) {
            cout << "Invalid Position" << endl;
            return;
        }
        if(Length == 0) {
            cout << "Array is Empty" << endl;
            return;
        }
        for(int i = pos; i < Length; i++) {
            arr[i] = arr[i + 1];
        }
        Length--;
    }

    int removeAtLast() {
        Length--;
    }

    int size() {
        return Length;
    }

    void getValueIndex(int index) {
        if(index<0 || index>Length) {
       cout << "Invalid Position" << endl;
       return;
        }
        cout << arr[index] << endl;
    }
};


int main()
{

    Array a1 = Array(8);

    a1.insertAtLast(25);
    a1.insertAtLast(12);
    a1.insertAtLast(50);
    a1.insertAtLast(40);
    a1.insertAtLast(80);
    a1.insertAtPosition(2,45);
    a1.insertAtLast(100);
    a1.remove(0);
    a1.display();

    a1.getValueIndex(10);

    cout << a1.search(25);
    cout << a1.search(500) << endl;
    cout << a1.size() << endl;
    




    return 0;
}