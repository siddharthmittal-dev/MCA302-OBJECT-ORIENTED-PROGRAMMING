#include <iostream>
using namespace std;
int main() {
    double num, den;
    cin >> num >> den;
    try {
        if (den == 0) throw "Division by zero!";
        cout << num / den << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}
