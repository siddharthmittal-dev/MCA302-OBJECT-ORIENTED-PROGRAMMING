#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person Constructor executed." << endl;
    }
    
    virtual ~Person() {
        cout << "Person Destructor executed." << endl;
    }
};

class Student : public Person {
public:
    Student() {
        cout << "Student Constructor executed." << endl;
    }
    
    ~Student() {
        cout << "Student Destructor executed." << endl;
    }
};

int main() {
    cout << "--- Allocating memory ---" << endl;
    Person* p = new Student();
    
    cout << "\n--- Deallocating memory ---" << endl;
    delete p; 
    
    
    return 0;
}