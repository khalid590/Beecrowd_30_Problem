#include<iostream>

using namespace std;

int main()
{

    char ch;
    cout<< "Enter any charecter: ";
    cin >> ch;

    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout<< "Vowel\n";
    }
    else
    {
        cout<< "Consonent";
    }

}
