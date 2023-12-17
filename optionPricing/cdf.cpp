#include"cdf.h"

double CDF(double X)
{
    const double a1 = 0.319381530, a2 = -0.356563782, a3 = 1.781477937;
    const double a4 = -1.821255978, a5 = 1.330274429;

    double x = 0, k=0;
    double N, CDF, n;

    x = fabs(X);

    k = 1/(1+0.2316419*x);

    n = (1/sqrt(2*pi)) * exp(-0.5*x*x);

    N = 1-n*(a1*k + a2*k*k +a3*pow(k,3) + a4*pow(k,4) + a5*pow(k,5));

    if (X>=0)
    {
        CDF = N;
    }
    else
    {
        CDF = 1-N;
    }
    return CDF;
}