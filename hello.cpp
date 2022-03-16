#include <stdio.h>
#include <iostream>

using namespace std;

int main1()
{
    string name;
    string color;

    cout << "Please enter your name:\n";
    getline(cin, name);

    cout << "\tHello, " << name << "\n\n";
    cout << "\tNice to meet you!!"
         << "\n\n";
    cout << "What's your favorite color? \n";
    getline(cin, color);
    cout << "\t" << color << " is a shitty color\n\n";

    return 0;
}
