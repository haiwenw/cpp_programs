#include<iostream>
#include<cmath>

using namespace std;

void fill_up(double a[], int& );
void display(double a[], int& );
double average(double a[], int );
double stan_dev(double a[], int, double );

const int MAX=100;

int main()
{
    int size;
    double a[MAX];

    fill_up(a, size);
    display(a, size);
    average(a, size);
    double mean = average(a, size);

    stan_dev(a, size, mean);
    return 0;
}

void fill_up(double a[], int& size)
{
    cout << "Enter size" << endl;

    cin >> size;
    cout << "Now Enter numbers" << endl;

    for (int i=1; i<=size; i++)
    {
        cin >> a[i-1];
    }
}

void display(double a[], int& size)
{
    cout << "You have entered the following values: " << endl;

    for (int i=1; i<=size; i++)
    {
        cout << a[i-1] << endl;
    }
}

double average(double a[], int size)
{
    double av=0.0;
    for (int i=1; i<=size; i++)
    {
        av += a[i-1];
    }

    double mean = av/size;
    cout << "The average is " << mean << endl;

    return mean;
}

double stan_dev(double a[], int size, double mean)
{
    double sum=0.0;
    for (int i=1; i<=size; i++)
    {
        sum += ((a[i-1] - mean)*(a[i-1] - mean));
    }

    double std = sum/size;
    cout << sqrt(std) << endl;
    return std;
}