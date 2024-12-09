#include "MyQueue.h"

int main()
{
    myQueue::Queue<int> a;
    a.show();

    a.push_back(1);
    a.push_back(8);
    a.push_back(2);
    a.push_back(9);
    a.push_back(10);

    while (!a.isEmpty()) {
        cout << "First: " << a.first() << endl;
        a.show();
        a.pop_front();
    }
    a.show();
}

