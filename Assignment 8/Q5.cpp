#include <iostream>
using namespace std;
class LibraryAccount {
    int availableBooks;
public:
    LibraryAccount(int books) : availableBooks(books) {}
    void issueBook(int amount) {
        try {
            if (amount > availableBooks) throw "Withdrawal amount exceeds available balance!";
            availableBooks -= amount;
            cout << availableBooks << endl;
        } catch (const char* msg) {
            cout << msg << endl;
        }
    }
};
int main() {
    LibraryAccount acc(10);
    int req;
    cin >> req;
    acc.issueBook(req);
    return 0;
}
