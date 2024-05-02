#include <iostream>
using namespace std;
int main()
{

    char operation;
    float Number1, Number2;
    cout << "konsa sa operation perform karna ha apne ? :('+','-','*','/')"<<endl;
    cin >> operation;

    cout << "Enter 2 numbers ";
    cin >> Number1 >> Number2;

    switch (operation)
    {
    case '+':
        cout << "Result:" << Number1 + Number2;
        break;

    case '-':
        cout << "Result:" << Number1 - Number2;

        break;

    case '*':
        cout << "Result:" << Number1 * Number2;
        break;

    case '/':
        if (Number2 != 2)
        {
            cout << "Result:" << Number1 / Number2;
        }
        else
        {
            cout << "Error division by zero is not possible......";
        }
        break;

    default:

        cout << "Invalid operator ";
    }


    return 0;
}