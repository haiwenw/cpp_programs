#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char name[30] = "That is it ";
    char another_string[80];

    strcpy(name, "Riaz Ahmad");

    cout << name;
    cout << " is of length " << strlen(name) << endl;

    cout << "Enter a name: ";

    cin.getline(another_string, 80);

    cout << another_string << endl;

    if ((strcmp(name, another_string)))
    {
        cout << "Goodbye ";
    }
    else
    {
        cout << "hello" << endl;
    }
    cout << strcat(name, another_string);
    return 0;
}