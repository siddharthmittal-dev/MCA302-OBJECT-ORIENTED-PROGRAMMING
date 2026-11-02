#include <iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    try {
        if (age < 0) throw "Age cannot be negative!";
        cout << age << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}
