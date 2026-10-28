#include <iostream>
using namespace std;

class Result
{
public:
    void result(int a)
    {
        cout << "Marks in one subject: " << a << endl;
    }

    void result(int a, int b)
    {
        cout << "Average of two subjects: "
             << (a + b) / 2.0 << endl;
    }

    void result(int a, int b, int c)
    {
        cout << "Average of three subjects: "
             << (a + b + c) / 3.0 << endl;
    }
};

int main()
{
    Result r;

    r.result(80);
    r.result(80, 90);
    r.result(80, 90, 85);

    return 0;
}