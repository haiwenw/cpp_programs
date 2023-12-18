#include<iostream>

using namespace std;

typedef const unsigned short int ushort;

ushort dimen=4;
ushort max_=3;

typedef double matrix[dimen][dimen];
typedef double vector[dimen];

double gauss(matrix , vector, vector, ushort);

int main()
{
    matrix A = {{10,-1,2,0}, {-1,11,-1,3}, {2,-1,10,-1}, {0,3,-1,8}};
    vector b = {6,25,-11,15};
    vector x = {0.0, 0.0, 0.0, 0.0};

    gauss (A, x, b, dimen);

    return 0;
}

double gauss(matrix A, vector x, vector b, ushort dimen)
{
    double pivot, sum;

    for (int k=0; k<=max_-1;k++)
    {
        for (int l=k+1; l<=max_; l++)
        {
            pivot=A[l][k] / A[k][k];
            
            for (int j=k; j<=max_;j++)
            {
                A[l][j] -= A[k][j] * pivot;
            } 

            b[l] -= b[k]*pivot;
        }
    }

    x[max_] = b[max_] / A[max_][max_];

    for (int k=max_-1; k>=0; k--)
    {
        sum=b[k];

        for (int j=k+1; j<=max_; j++)
        {
            sum-=x[j]*A[k][j];
        }
        x[k] = sum/A[k][k];
    }

    for (int i=1; i<=dimen; i++)
    {
        cout << x[i-1] << endl;
    }
    return 0;
}