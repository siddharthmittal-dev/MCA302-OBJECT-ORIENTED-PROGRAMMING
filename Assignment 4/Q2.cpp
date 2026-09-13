#include<iostream>
#include<string>
using namespace std;

class Person{
protected:
    string name;

public:
    void getPersonDetails(){
        cout<<"Enter Name: ";
        getline(cin, name);
    }
};


class Employee : public Person{
protected:
    int empID;

public:
    void getEmployeeDetails(){
        cout<<"Enter Employee ID: ";
        cin>> empID;
        
        cin.ignore(10000, '\n'); 
    }
};


class Manager : public Employee{
    string department;

public:
    void getManagerDetails(){
        cout<<"Enter Department: ";
        getline(cin, department);
    }

    void display(){
     
        cout<<"\n--- Manager Details ---"<<endl;
        cout<<"Name: "<< name<<endl;
        cout<<"Employee ID: "<< empID<<endl;
        cout<<"Department: "<< department<<endl;
    }
};

int main(){
    Manager m;
    
    m.getPersonDetails();
    m.getEmployeeDetails();
    m.getManagerDetails();
    
    m.display();

    return 0;
}