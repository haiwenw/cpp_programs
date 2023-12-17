#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    const double pi = 4*atan(1.0);

    cout << "ceil(pi) = " << ceil(pi) << endl;
    cout << "floor(pi) = " << floor(pi) <<endl;
    cout << "sqrt(pi) = " << sqrt(pi) << endl;

    cout << "pow(pi, 0.5) = " << pow(pi, 0.5) << endl;
    cout << "log(pi) = " << log(pi) << endl;

    cout << "exp(pi) = " << exp(pi) << endl;
    cout << "log10(pi) = " << log10(pi) << endl;
    cout << "sin(pi/2) = " << sin(pi/2) << endl;
    cout << "cos(pi/2) = " << cos(pi/2) << endl;

    return 0;

    // int number;
    // char character;

    // cout << "Type in a character: \n";
    // cin >> character;

    // number = character;

    // cout << "The character '" << character;
    // cout << "' is represented as the number ";
    // cout << number << " in the computer.\n";

    // return 0;


    // double a = 0.0, b = 0.0, c = 0.0;
    // double root = 0.0;
    // double x1 = 0.0, x2 = 0.0;

    // cout << "Enter the values of a, b & c" << endl;
    // cin >> a >> b >> c;

    // root = sqrt(b*b-4*a*c);

    // x1 = (-b+root) / (2*a);
    // x2 = (-b-root) / (2*a);

    // cout << "The roots are " << x1 << " and " << x2 << endl;
    
    // return 0;

}