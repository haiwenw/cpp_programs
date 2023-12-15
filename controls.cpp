#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std;

const double pi = 4.0*atan(1.0);

int main()
{
    // ofstream out;
    // out.open('table.xls');
    // for (short unsigned int t = 0; t <=10; t++)
    // {
    //     out << t << '\t' << t*t << endl;
    // }

    // out.close();
    // return 0;
    int number;

    cout << setiosflags (ios :: left );
    cout.width(20);
    cout << "Number" << "Square Root" << endl << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    for (number=1; number<=10; number = number + 1)
    {
        cout.width(20);
        cout << number << sqrt(number) << "\n";
    }

    return 0;


    // float number;

    // cout << "Type in a real number.\n";
    // cin >> number;
    // cout.setf(ios::fixed);
    // cout.precision(2);
    // cout << "The square root of " << number << " is approximately ";
    // cout << sqrt(number) << ".\n";
    // return 0;
 
    // char grade;

    // cout << "Enter exam grade for feedback" << endl;
    // cin >> grade;

    // switch (grade){
    //     case 'A' : cout << "Excellent" << endl;
    //     break;
    //     case 'B' : cout << "Good" << endl;
    //     break;
    //     case 'C' : cout << "OK - not bad" << endl;
    //     break;
    //     case 'D' : cout << "Need to apply yourself more" << endl;
    //     break;
    //     case 'F' : cout << "That is awful!" << endl;
    //     break;
    //     default : cout << "Cannot recognize this grade - please re-enter." << endl;
    //     break;
    // }

    // return 0;
    // unsigned int n, j;
    // cout << "Enter number: " << endl;
    // cin >> n;

    // for (j=2; j<=n/2; j++)
    // {
    //     if (n%j==0)
    //     {
    //         cout << "It is not a prime as it is divisible by " << j << endl;
    //         exit(0);
    //     }
    //     cout << "It is a prime" << endl;
    // }

    // return 0;


    // int n=1;
    // int sum=0;
    // while (n<=100)
    // {
    //     sum += n*n;
    //     ++n;
    // }
    // cout << sum << endl;
}

// int main()
// {
//     const double a1 = 0.319381530, a2 = -0.356563782, a3=1.781477937;
//     const double a4 = -1.821255978, a5 = 1.330274429;

//     double X=0, x=0;
//     double k=0;
//     double N, CDF, n;

//     cout << "Enter the value of the random variable X" << endl;

//     cin >> X;

//     x = fabs(X);
//     k = 1/(1+0.2316419*x);

//     n = (1/sqrt(2*pi)) * exp(-0.5*x*x);
//     N = 1-n*(a1*k + a2*k*k + a3*pow(k,3) + a4*pow(k,4) + a5*pow(k,5));
//     CDF = N;

//     if (X<0)
//     {
//         CDF = 1-N;
//     }
//         cout << CDF << endl;

//         return 0;
// }





// double a, b, c;
// double d, x1, x2, x;


// int integer1 = 1;
// int integer2 = 2;
// int integer3 = 3;

// int main()
// {
//     cout << "Enter values of a, b & c in turn \n";
//     cin >> a;
//     cin >> b;
//     cin >> c;

//     d = (b*b - 4*a*c);

//     if (a==0)
//     {
//         x = -c/b;
//         cout << "one root exists = " << x << endl;
//     }
//     else
//         if (d>0)
//         {
//             x1 = (-b+sqrt(d))/(2*a);
//             x2 = (-b-sqrt(d))/(a*a);

//             cout << "There are two roots, x=" << x1 << " & " << x2 << endl;
//         }
//     else
//         if (d==0)
//         {
//             x = -b/(2*a);
//             cout << "One root exists = " << x << endl;
//         }
//     else
//         if (d<0)
//         {
//             cout << "This equation has complex roots\n";
//             double real = -b/(2.0*a);
//             double im = sqrt(fabs(d)) / (2.0*a);

//             cout << "x1 = " << real <<"+i*" << im << endl;
//             cout << "x2 = " << real <<"-i*" << im << endl; 
//         }
    
//     return 0;





//     // int n = 0;
//     // cout << "type in an integer value" << endl;
//     // cin >> n;

//     // if (n%2==0)
//     // {
//     //     cout << n << ": is an even number" << endl;
//     // }

//     // else
//     // {
//     //     cout << n << ": is an odd number" << endl;
//     // }


//     // int integer1 = -1;
//     // int integer2 = -2;
//     // {
//     //     int integer1 = 10;
//     //     cout << "integer1 = " << integer1 << endl;
//     //     cout << "integer2 = " << integer2 << endl;
//     //     cout << "integer3 = " << integer3 << endl;
//     // }

    // cout << "integer1 = " << integer1 << endl;
    // cout << "integer2 = " << integer2 << endl;
    // cout << "integer3 = " << integer3 << endl;

    // return 0;

    // int x = 22;
    // {
    //     int x = 44;
    //     cout <<"Integer x = " << x << endl;
    // }
    // cout << "Integer x = " << x << endl;

    // {
    //     int x = 66;
    //     cout << "Integer x = " << x << endl;
    // }
    // cout << "Integer x = " << x << endl;
    // return 0;
