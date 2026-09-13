#include<iostream>
#include<string>
using namespace std;

class Vehicle{
protected:
    string brand;
    string model;

public:
    void getVehicleDetails(){
        cout<<"Enter Brand: ";
        cin>> brand;
        cout<<"Enter Model: ";
        cin>> model;
    }
};


class Car : public Vehicle{
    int doors;

public:
    void getCarDetails(){
        cout<<"Enter Number of Doors: ";
        cin>> doors;
    }

    void displayCar(){
        cout<<"\n--- Car Details ---"<<endl;
        cout<<"Brand: "<< brand<<endl;
        cout<<"Model: "<< model<<endl;
        cout<<"Doors: "<< doors<<endl;
    }
};


class Bike : public Vehicle{
    int engineCapacity;

public:
    void getBikeDetails(){
        cout<<"Enter Engine Capacity (cc): ";
        cin>> engineCapacity;
    }

    void displayBike(){
        cout<<"\n--- Bike Details ---"<<endl;
        cout<<"Brand: "<< brand<<endl;
        cout<<"Model: "<< model<<endl;
        cout<<"Engine Capacity: "<< engineCapacity<<"cc"<<endl;
    }
};

int main(){
    Car c;
    Bike b;

    cout<<"--- Input Car Info ---"<<endl;
   
    c.getVehicleDetails(); 
    c.getCarDetails();

    cout<<"\n--- Input Bike Info ---"<<endl;
    
    b.getVehicleDetails(); 
    b.getBikeDetails();

    c.displayCar();
    b.displayBike();

    return 0;
}