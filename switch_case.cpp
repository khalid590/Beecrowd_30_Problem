#include<iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    switch(num)
    {
    case 0:
        cout << "Zero";
        break;

    case 1:
        cout << "One";
        break;

    case 2:
        cout << "Two";
        break;

    case 3:
        cout << "Three";
        break;

    case 4:
        cout << "Four";
        break;

    case 5:
        cout << "Five";
        break;

    default:
        cout << "Not in here";

    }
}
