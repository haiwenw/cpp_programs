#include<iostream>
#include<ctime>
#include<fstream>

#include<cmath>

using namespace std;

double normal(double, double);

int main()
{
    srand((unsigned)time(NULL));
    ofstream print;
    print.open("results.xls");
    long N=1000;

    double asset=100, IR=0.05, vol=0.2;
    double dt = 1.0/N;

    print << 0 << '\t' << asset << endl;

    for (unsigned short int i=1; i<=N; i++)
    {
        double time = i*dt;
        double dX = normal(0.0, 1.0)*sqrt(dt);
        double dS = asset*(IR*dt + vol*dX);
        asset += dS;

        print << time << '\t' << asset << endl;
    }

    print.close();
    return 0;
    
}

double normal(double mean, double std)
{
    static int iset = 0;
    static double gset;
    double fac, r, v1, v2;

    if (iset == 0)
    {
        r = 0;
        do
        {
            /* code */
            v1 = 2.0 * rand()/RAND_MAX - 1.0;
            v2 = 2.0 * rand()/RAND_MAX - 1.0;
            r = v1*v1 + v2*v2;

        } while (r>=1.0 || r==0.0);
        
        fac = sqrt((-2*log(r))/r);
        gset = (v1*fac);
        iset = 1;
        v2 = v2*fac*std + mean;
        return v2;
    }
    else
    {
        iset = 0;
        return (gset*std)+mean;
    }
}