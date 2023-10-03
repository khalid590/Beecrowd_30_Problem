#include<iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout<< "Enter two numbers: ";
    cin>> num1 >> num2;

    int add = num1 + num2;
    cout<< "Result is: " << add <<endl;

    int neg = num1 - num2;
    cout << "Min result is: " <<neg <<endl;

    int sub = num1 * num2;

    cout << "Sub value is: " <<sub <<endl;

    int div = num1 / num2;

    cout << "Div value is: " <<div <<endl;

    return 0;
}
