#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    // loop 20 times
    for (unsigned int counter{1}; counter <= 20; ++counter) {
    //pick random number from 1 to 6 and out put it
    cout << setw(10) << (1 + rand() % 5);

    // if counter is divisible by 5, start a new line of out put
    if (counter % 5 == 0) {
        cout << endl;

        }
    }
}