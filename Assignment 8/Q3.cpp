#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    try {
        if (num < 0) throw 'n';
        if (num > 100) throw 100;
        cout << num << endl;
    } catch (char e) {
        cout << "Number is negative" << endl;
    } catch (int e) {
        cout << "Number is greater than 100" << endl;
    }
    return 0;
}
