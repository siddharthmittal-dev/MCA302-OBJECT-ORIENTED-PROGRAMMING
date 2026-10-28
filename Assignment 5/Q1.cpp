#include <iostream>
#include <string>
using namespace std;
class print 
{
    public:

    void display (int a)
    {
        cout<<"Integer:"<<a<<endl;

    }
    void display (double b)

    { cout<<"double"<<b<<endl;


    }
     void display (string c)
     {
        cout<<"string:"<<c<<endl;
     }

};
int main()
{
    print p;
    p.display(10);
    p.display(10.5);
    p.display(string("hello world"));
    return 0;
}