#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{

    double x1,x2, y1, y2,m;

    cin >> x1 >> y1 >> x2 >> y2;

    m = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    cout << fixed << setprecision(4) << m <<endl;

}
