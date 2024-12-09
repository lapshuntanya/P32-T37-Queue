#include "MyQueue.h"
#include "MyPriorityQueue.h"

int main()
{
   /* myQueue::Queue<int> a;
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
    a.show();*/

    myQueue::PriorityQueue<int> b;
    b.show();

    b.push_back(4);
    b.push_back(9);
    b.push_back(1);
    b.push_back(-5);
    b.push_back(19);
    

    while (!b.isEmpty()) {
        cout << "First: " << b.first() << endl;
        b.show();
        b.pop_front();
    }

    b.show();
}

