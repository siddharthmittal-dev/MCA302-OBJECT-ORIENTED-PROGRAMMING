#include<iostream>
using namespace std;

class Person{
protected:
 string name;
 int age;
public:
 void acceptPerson(){
  cout<<"Enter name: ";
  cin>>name;
  cout<<"Enter age: ";
  cin>>age;
 }
};

class Student:public Person{
 int rollno;
 string course;
public:
 void accept(){
  acceptPerson();
  cout<<"Enter roll number: ";
  cin>>rollno;
  cout<<"Enter course: ";
  cin>>course;
 }
 void display(){
  cout<<"\nStudent Details\n";
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"Roll Number: "<<rollno<<endl;
  cout<<"Course: "<<course<<endl;
 }
};

int main(){
 Student s;
 s.accept();
 s.display();
 return 0;
}