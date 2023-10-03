#include<iostream>

using namespace std;

int main()
{

    int x;
    cout << "Enter any number: ";
    cin >> x;

    (x % 2 == 0) ? cout <<x <<" is Even" : cout<<x << " is Odd";
}
