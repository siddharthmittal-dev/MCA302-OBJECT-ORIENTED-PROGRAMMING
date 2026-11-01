#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    void operator--() {
        --value;
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num(10);

    cout << "Before applying --:" << endl;
    num.display();

    --num;
    
    cout << "After applying --:" << endl;
    num.display();

    return 0;
}