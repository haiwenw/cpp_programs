#include<iostream>
#include<cmath>

using namespace std;

const int MAX=10;

int main()
{
    double A[MAX] = {0.0};
    double average, ans, st_dev;
    int i, N;
    average=0.0;

    ans=0.0;

    cout << "Enter the number of values (up to 10) for which you wish to evaluate " << endl;
    cout << "the standard deviation" << endl;
    cin >> N;

    cout << "Enter the " << N << " values separated by return after each\n";

    for (i=1; i<=N; i++)
    {
        cin >> A[i-1];
    }

    for (i=1; i<=N; i++)
    {
        average += A[i-1]/N;
    }

    cout << "average: " << average << endl;

    for (i=1; i<=N; i++)
    {
        ans += ((A[i-1]-average) * (A[i-1]-average));
    }

    st_dev = sqrt(ans/double(N));

    cout << "standard deviation: " << st_dev << endl;
    return 0;
}

float mean(float a[], int n)
{
    float sum = 0;
    float average = 0;
    for (int i=0 ; i<n; i++)
    {
        sum += a[i];
    }
    average = sum/n;
    return average;
}