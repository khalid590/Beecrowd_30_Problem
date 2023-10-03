#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    double a,b,c,x;

    cin >> a >> b >> c;

    x = ((a * 2) + (b * 3) + (c * 5)) / 10;

    cout<< "MEDIA = " <<fixed <<setprecision(1) << x << endl;
}
