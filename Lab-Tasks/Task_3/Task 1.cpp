#include <iostream> // Muhammad Ibrahim 72404
using namespace std;
class List {
private: // Muhammad Ibrahim 72404
    int arr[10];
    int size;
    int n;
public:
    List() { // Muhammad Ibrahim 72404
        size = 0;
    } 
    void input( ) {
        cout << "Enter size: ";
        cin >> n; // Muhammad Ibrahim 72404
        size = n;
        cout << "Enter " << size << " numbers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i]; // Muhammad Ibrahim 72404
        }
    }
    void display() { // Muhammad Ibrahim 72404
        cout << "List: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl; // Muhammad Ibrahim 72404
    }
    int Length() {
        return size;
    } // Muhammad Ibrahim 72404 
};
int main() {
    List list;
    list.input();
    list.display(); // Muhammad Ibrahim 72404

    cout << "Length of list is: " << list.Length() << endl;
    return 0; // Muhammad Ibrahim 72404
}
