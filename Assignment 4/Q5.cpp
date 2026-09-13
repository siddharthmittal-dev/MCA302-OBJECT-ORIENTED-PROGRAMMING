#include<iostream>
#include<string>
using namespace std;

class College{
protected:
    string collegeName;

public:
   
    College(string cName){
        collegeName=cName;
        cout<<"[1] College Constructor Executed: "<< collegeName<<endl;
    }
};


class Department : public College{
    string deptName;

public:

    Department(string cName, string dName) : College(cName){
        deptName=dName;
        cout<<"[2] Department Constructor Executed: "<< deptName<<endl;
    }

    void display(){
        cout<<"\n--- Final Details ---"<<endl;
        cout<<"College: "<< collegeName<<endl;
        cout<<"Department: "<< deptName<<endl;
    }
};

int main(){
    cout<<"Creating Department Object..."<<endl;
    
   
    Department d("Institute of Technology", "Computer Science");
    
    d.display();

    return 0;
}