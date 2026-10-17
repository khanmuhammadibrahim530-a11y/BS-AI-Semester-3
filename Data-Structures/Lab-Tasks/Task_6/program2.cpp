#include <iostream>
using namespace std;

class Sort
{
public:
    void bubbleSort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};

int main()
{
    int arr[] = {50, 20, 40, 10, 30};
    Sort s;

    s.bubbleSort(arr, 5);

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}