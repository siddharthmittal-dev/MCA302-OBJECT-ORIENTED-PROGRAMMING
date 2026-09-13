#include<iostream>
using namespace std;

class BankAccount{
    int accountNo;
    float balance;
    static int totalAccounts;

public:   
    BankAccount(int accNo,float bal){
        accountNo=accNo;
        balance = bal;
        totalAccounts++;
    }

    friend void displayDetails(BankAccount b);

    static void showTotalAccounts(){
        cout<<"Total accounts created: "<< totalAccounts<<endl;
    }
};

int BankAccount::totalAccounts=0;

void displayDetails(BankAccount b){
    cout<<"Account No: "<<b.accountNo<<endl;
    cout<<"Balance: Rs. "<< b.balance<< endl;
}

int main(){
    BankAccount acc1(1011, 175000.50);
    BankAccount acc2(1012, 200000.00);
    BankAccount acc3(1013, 75000.45);

    cout<<"--- Account Details ---"<<endl;
    displayDetails(acc1);
    displayDetails(acc2);
    displayDetails(acc3);

    cout<<endl;
    BankAccount::showTotalAccounts();

    return 0;
}