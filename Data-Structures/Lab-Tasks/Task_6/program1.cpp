#include <iostream>
using namespace std;

class Search {
public:
    int linearSearch(int arr[], int n, int key) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == key)
                return i;
        }
        return -1;
    }
};

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    Search s;


    int result = s.linearSearch(arr, 5, 40);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}