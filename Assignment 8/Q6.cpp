#include <iostream>
using namespace std;
class Student {
    int marks[5];
public:
    void getMarks() {
        try {
            int sum = 0;
            for (int i = 0; i < 5; i++) {
                cin >> marks[i];
                if (marks[i] < 0 || marks[i] > 100) throw "Mark outside range 0-100!";
                sum += marks[i];
            }
            cout << sum / 5.0 << endl;
        } catch (const char* msg) {
            cout << msg << endl;
        }
    }
};
int main() {
    Student s;
    s.getMarks();
    return 0;
}
