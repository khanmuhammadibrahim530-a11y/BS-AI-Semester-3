#include <iostream>
using namespace std;
int main()
{
     //Muhammad Ibrahim 72404
    int stackArray[5];
    int top = -1;
    // PUSH 10
    top++;
    stackArray[top] = 10;
    // PUSH 20
    top++;
    stackArray[top] = 20;
    // PUSH 30
    top++;
    stackArray[top] = 30;
    cout << "Top before Pop: "
         << stackArray[top] << endl;

    // POP
    top--;

    cout << "Top after Pop: "
         << stackArray[top] << endl;

    return 0;
}