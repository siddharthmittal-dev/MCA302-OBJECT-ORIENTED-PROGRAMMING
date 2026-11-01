#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:

Counter(int c = 0) : count(c) {}

    void operator++() {
        ++count;
    }

    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Before applying ++:" << endl;
    c1.display();

    ++c1;

    cout << "After applying ++:" << endl;
    c1.display();

    return 0;
}