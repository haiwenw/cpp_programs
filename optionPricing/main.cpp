#include<iostream>
#include<cmath>
#include<fstream>
#include"CDF.h"

using namespace std;



int main()
{
    double Call_Option, d1, d2;
    double S=150, E=100, r=0.05, vol=0.2, tau=0.05;

    ofstream out;
    out.open("BSE.xls");

    for (S=0; S<=300; S+=5)
    {
        d1 = (log(S/E) + (r+0.5*vol*vol)*tau) / (vol*sqrt(tau));
        d2 = d1 - vol*sqrt(tau);

        Call_Option = S*CDF(d1) - E*exp(-r*tau)*CDF(d2);
        
        out << S << '\t' << Call_Option << endl;
    }

    out.close();

    return 0;
}
