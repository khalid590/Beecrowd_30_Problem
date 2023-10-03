#include<iostream>

using namespace std;

int main()


{
    int n, h, m, s, temp;

    cin >> n;

    h = n / 3600;
    temp = n % 3600;
    m = temp / 60;
    s = temp % 60;

    cout<< h << ":" << m << ":" << s << endl;


}
