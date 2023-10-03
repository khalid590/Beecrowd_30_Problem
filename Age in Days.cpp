#include<iostream>

using namespace std;

int main()
{

    int n, y, mo, dy, temp;
    cin >> n;

    y = n / 365;
    temp = n % 365;
    mo = temp / 30;
    dy = temp % 30;

    cout << y <<" ano(s)" <<endl << mo <<" mes(es)" <<endl << dy <<" dia(s)" << endl;





}
