#include <cstdlib>
#include <cstdio>
#include <iostream>
// #include <conio>

// using namespace std;

int main(int nNumberofArgs, char *pszArgs[])
{
    // enter the temp in C
    int celsius;
    std::cout << "Enter the temp in Celsius: ";
    std::cin >> celsius;

    // calculate converstion factor from C -> F
    int factor;
    factor = 212 - 32;

    // use conversion factor to convert C -> f
    int fahrenheit;
    fahrenheit = factor * celsius / 100 + 32;

    // output the results
    std::cout << "fahrenheit value is: ";
    std::cout << fahrenheit << std::endl;

    // wait until the user is ready before terminating the program to allow the user to see the results
    std::cout << "Press Enter to continue..." << std::endl;
    // cin.getch();
    std::cin.get();
    return 0;
}
