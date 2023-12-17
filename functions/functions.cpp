#include <iostream>
#include<cmath>

using namespace std;

int area(int length, int width);

void get_dimensions(int& length, int& width);

int main()
{
    int this_length, this_width;

    get_dimensions(this_length, this_width);

    cout << "The area of a " << this_length << "x" << this_width;
    cout << " rectangle is " << area(this_length, this_width);
    return 0;
}

void get_dimensions(int& length, int& width)
{
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    cout << "\n";
}

int area (int length, int width)
{
    return length*width;
}