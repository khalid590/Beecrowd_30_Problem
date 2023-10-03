#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
    int x, y;

    cin >> x >> y;
    cout << fixed << setprecision(3);

    float m = ((x * y)/ 12.0);

    cout<< m  << endl;


}
