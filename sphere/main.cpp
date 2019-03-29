#include <iostream>
#include <cmath>
using namespace std;

const double PI{3.14519}; // define global constant PI

// calculates volume of a sphere
inline double sphereVolume(const double radius){
    return 4.0 / 3.0 * PI *pow(radius, 3);
}

int main() {
    // prompt user for radius
    cout << "Enter the length of the radius of your sphere: ";
    double radiusValue;
    cin >> radiusValue; // input radius

    // use radiusValue to calculate volume of sphere and display result
    cout << "Volume of sphere with radius " << radiusValue
        << " is " << sphereVolume(radiusValue) << endl;
}