#include<iostream>
#include<iomanip>
#include<math.h>


using namespace std;

int main()
{
    double a,b,c,x,r1,r2;

    cin >> a >> b >> c;
    cout << fixed << setprecision(5);

    x = (b*b - 4*a*c);

    if( a == 0){
        cout << "Impossivel calcular" <<endl;
    }
    else if (x < 0){
        cout << "Impossivel calcular" <<endl;

    }

    else{
        r1 = (-b + sqrt(x)) / (2*a);
        r2 = (-b - sqrt(x)) / (2*a);
         cout << "R1 = " <<r1 << endl << "R2 = "  <<r2 <<endl;
    }

}
