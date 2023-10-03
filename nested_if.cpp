#include<iostream>

using namespace std;

int main()
{

    int mark;
    cout<< "Enter any mark: ";
    cin >> mark;

    if(mark > 32)
    {
        if(mark >= 90)
        {
            cout<< "A+";
        }
        else if(mark >= 80)
        {

            cout << "A";
        }

        else if(mark >=70)
        {
            cout<< "B";
        }
        else if(mark >= 60)
        {
            cout << "B-";
        }
        else if(mark >= 50)
        {
            cout << "C";
        }

        else if (mark >= 40)
        {
            cout << "D";
        }

        else if (mark >=33)
        {
            cout << "Pass";
        }
    }
    else{
        cout<< "Fail";
    }
}
