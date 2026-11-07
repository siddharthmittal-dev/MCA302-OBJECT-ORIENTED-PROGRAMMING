#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;

    // Stack operations
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack top: " << s.top();

    s.pop();

    cout << "\nStack after pop: " << s.top();

    // Queue operations
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "\nQueue front: " << q.front();

    q.pop();

    cout << "\nQueue after pop: " << q.front();

    return 0;
}