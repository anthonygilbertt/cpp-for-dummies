#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char *pszArgs[])
{
    // enter the temp in C
    int celsius;
    cout << "Enter the temp in Celsius: ";
    cin >> celsius;

    // calculate converstion factor from C -> F
    int factor;
    factor = 212 - 32;

    // use conversion factor to convert C -> f
    int fahrenheit;
    fahrenheit = factor * celsius / 100 + 32;

    // output the results
    cout << "fahrenheit value is: ";
    cout << fahrenheit << endl;

    // wait until the user is ready before terminating the program to allow the user to see the results
    cout << "Press Enter to continue..." << endl;
    cin.get();
    return 0;
}
