#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    float m,z;
    int x,y;


    cin >> x >> y >> m;

    z = (y * m);

    cout << "NUMBER = "<<x <<endl;
    cout << "SALARY = U$ " <<fixed <<setprecision(2) <<z <<endl;




}
