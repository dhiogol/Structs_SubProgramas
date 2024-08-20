#include <iostream>

using namespace std;


double converter(int vFRT) {
    return 5.0 / 9.0 * (vFRT - 32);
}

int main() {
    cout << "vFRT | Celsius\n";
    for (int vFRT = 0; vFRT <= 100; vFRT++) {
        double celsius = converter(vFRT);
        cout << vFRT << "          | " << celsius << endl;
    }

    return 0;
}
