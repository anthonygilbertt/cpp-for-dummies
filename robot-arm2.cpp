#include <iostream>
#include <cmath>

using namespace std;

int main2()
{
    /* -------------------------
          Z-Cartesian Calculation
       ----------------------------*/
    double z = 0.0, z_result;

    z_result = acos(z);
    cout << "acos(z) = " << z_result << " radians" << endl;

    // z_result in degrees
    cout << "acos(z) = " << z_result * 180 / 3.1415 << " degrees" << endl;

    /* -------------------------
       X-Cartesian Calculation
    ----------------------------*/
    int x = 60, x_result;

    x_result = acos(x);
    cout << "acos(x) = " << x_result << " radians" << endl;

    // x_result in degrees
    cout << "acos(x) = " << x_result * 180 / 3.1415 << " degrees" << endl;

    /* -------------------------
       Y-Cartesian Calculation
    ----------------------------*/
    int y = -45, y_result;

    y_result = acos(y);
    cout << "acos(y) = " << y_result << " radians" << endl;

    // y_result in degrees
    cout << "acos(y) = " << y_result * 180 / 3.1415 << " degrees" << endl;

    return 0;
}