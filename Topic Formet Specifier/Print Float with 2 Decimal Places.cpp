#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float pi = 3.14159;

    cout << "Value of Pi: " << fixed << setprecision(2) << pi << endl;

    return 0;
}
