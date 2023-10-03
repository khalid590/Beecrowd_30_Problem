#include<iostream>

using namespace std;

int main()
{

    int num;

    cout<< "Enter your number: ";
    cin >> num;

    if(num > 0){

        cout<< "Positive value";
    }

    else if(num < 0)
        {
        cout<< "Negative value";

        }

    else{

        cout<< "Zero";
    }

}
