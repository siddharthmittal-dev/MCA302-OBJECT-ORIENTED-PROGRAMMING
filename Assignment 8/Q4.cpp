#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int index;
    cin >> index;
    try {
        if (index < 0 || index >= 5) throw "Index out of bounds!";
        cout << arr[index] << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}
