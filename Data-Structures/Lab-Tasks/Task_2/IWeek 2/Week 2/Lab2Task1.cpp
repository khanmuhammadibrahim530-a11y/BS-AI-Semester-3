#include <iostream>
using namespace std;
int main()
{
    // Ibrahim 72404
    cout << "Before swapping: " << endl;
    int arr1[25];
    int arr2[25];
    int arr3[25];
    for (int i = 0; i < 25; i++)
    {
        arr1[i] = i + 1;
        arr2[i] = 10*(i+1);
    }
    cout << "Array 1: ";
    for (int i = 0; i < 25; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nArray 2: ";
    for (int i = 0; i < 25; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\nAfter swapping: ";
    for (int i = 0; i < 25; i++)
    {
        arr3[i] = arr1[i];
        arr1[i] = arr2[i];
         arr2[i] = arr3[i];
    }
    cout << "\nArray 1: ";
    for (int i = 0; i < 25; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\nArray 2: ";
    for (int i = 0; i < 25; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}
