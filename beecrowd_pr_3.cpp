#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double r, a;
    cin >>r;

    cout<<fixed;
    cout<<setprecision(4);

    a = (3.14159 * r * r);

    cout<< "A="<<a <<endl;


}
