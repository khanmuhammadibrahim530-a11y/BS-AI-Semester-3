#include <iostream> // Muhammad Ali 73051
using namespace std;
class List {
private:
    int arr[10]; // Muhammad Ali 73051
    int size;
    int n;
public:
    List() { // Muhammad Ali 73051
        size = 0;
    } 
    void input() {
        cout << "Enter size: ";
        cin >> n;
        size = n; // Muhammad Ali 73051
        cout << "Enter " << size << " numbers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void remove() { // Muhammad Ali 73051
        int position;
        cout << "Enter index to delete: ";
        cin >> position;

        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;  // Muhammad Ali 73051
    }
    void display() {
        cout << "List: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;  // Muhammad Ali 73051
    }
    int Length() {
        return size;
    }
};
int main() { // Muhammad Ali 73051
    List list;
    list.input();
    list.display();
    list.remove();
    list.display(); // Muhammad Ali 73051
    cout << "Length of list is: " << list.Length() << endl;
    return 0;
}
