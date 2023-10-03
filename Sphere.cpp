#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    double r,m;
    cin >> r;

    m = (4.0/3 * 3.14159 * r * r * r);

    cout << "VOLUME = " <<fixed <<setprecision(3) <<m <<endl;
}
