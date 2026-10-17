#include <iostream>
using namespace std;
int main()
{// Muhammad  Ibrahim  72404
    char opt;
    float sum, average, product;
    float num1, num2, num3, num4;
    cout << "Enter four numbers :" << endl;
    cin >> num1 >> num2 >> num3 >> num4;
    cout << "S for sum\n A for average\n P for product" << endl;
    cout << "Enter the operation you want to perform: ";
    cin >> opt;
    switch (opt)
    {
    case 'S':
    case 's':
        sum = num1 + num2 + num3 + num4;
        cout << "The sum is: " << sum;
        break;
    case 'A':
    case 'a':
        average = (num1 + num2 + num3 + num4) / 4;
        cout << "THe average is: " << average;
        break;
    case 'P':
    case 'p':
        product = num1 * num2 * num3 * num4;
        cout << "The product is: " << product;
        break;
    default:
        cout << "Invalid";
    }
    return 0;
}