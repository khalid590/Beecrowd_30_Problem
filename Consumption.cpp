#include<iostream>
#include<iomanip>

using namespace std;

int main()


{
    int x;
    float y, z;

    cin >> x >> y;

    z = (x / y);

    cout << fixed << setprecision(3) <<z <<" km/l" << endl;

}
