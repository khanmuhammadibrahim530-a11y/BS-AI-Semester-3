#include <iostream> // Muhammad Ali 73051
using namespace std;
class List {
private:
    int arr[10]; // Muhammad Ali 73051
    int size;
public:
    List() {
        size = 0; // Muhammad Ali 73051
    } 
    void input() {
        cout << "Enter size: ";
        cin >> size;
        cout << "Enter " << size << " numbers: ";
        for (int i = 0; i < size; i++) { // Muhammad Ali 73051
            cin >> arr[i];
        }
    }
    void remove() {
        int value; // Muhammad Ali 73051
        cout << "Enter number to delete: ";
        cin >> value;
        int position = -1;
        for (int i = 0; i < size; i++) {
            if (arr[i] == value) { // Muhammad Ali 73051
                position = i;
                break;
            } // Muhammad Ali 73051
        }
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    void display() { // Muhammad Ali 73051
        cout << "List: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int Length() { // Muhammad Ali 73051
        return size;
    }
};
int main() {
    List list; // Muhammad Ali 73051
    list.input();
    list.display();
    list.remove();
    list.display(); // Muhammad Ali 73051
    cout << "Length of list is: " << list.Length() << endl;
    return 0;
} // Muhammad Ali 73051
