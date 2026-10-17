#include <iostream>
using namespace std;
int main()
{
    // Muhammad  Ibrahim  72404
    int searching_num;
    int a[5] = {5, 10, 15, 20, 25};
    cout << "Enter the searching number: ";
    cin >> searching_num;
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] == searching_num)
        {
            cout << "The number is at index: " << i;
        }
    }

    return 0;
}