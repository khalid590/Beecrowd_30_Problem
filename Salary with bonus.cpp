#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    string ch;
    double x,y,z;

    cin >> ch >> x >> y;

    z = x + (y * 0.15);

    cout<< "TOTAL = R$ " <<fixed<<setprecision(2)<<z <<endl;
}

