#include<iostream>

using namespace std;

int main()
{

    double fahrenheit, celcius;

    cout<< "Enter your Fahrenheit:";
    cin >> fahrenheit;

    celcius = (fahrenheit - 32) / 1.8;

    cout<< "Celcius is: "<< celcius;
}
