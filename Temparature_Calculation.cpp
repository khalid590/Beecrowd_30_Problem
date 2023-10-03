// Fahrenheit to Celcius

#include<iostream>

using namespace std;
int main()
{

    double fahrenheit, Celcius;

    cout<< "Enter your Fahrenheit:";
    cin >> fahrenheit;

    Celcius = (fahrenheit-32)/1.8;

    cout<< "Celcius is: " << Celcius;
}
