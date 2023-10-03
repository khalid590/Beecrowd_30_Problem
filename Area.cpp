#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    float a,b,c,triangle, circle, trapezium, square, rectangle;

    cin >> a >> b>> c;
    cout<< fixed << setprecision(3);

    triangle = (a * c)/2;
    circle = 3.14159 * c * c;
    trapezium = ((a + b)/2)*c;
    square = (b*b);
    rectangle = (a * b);

    cout << "TRIANGULO: " <<triangle <<endl << "CIRCULO: " <<circle <<endl << "TRAPEZIO: " <<trapezium <<endl << "QUADRADO: " <<square <<endl << "RETANGULO: " <<rectangle <<endl;

}
