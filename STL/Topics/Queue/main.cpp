#include <iostream>
#include <queue>
//Queue follows (FIFO) first in first out
using namespace std;

int main()
{
    queue<string> q;
    q.push("Ashutosh");
    q.push("Pratap");
    q.push("Singh");
    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<"Second element: "<<q.front()<<endl;
    q.pop();
    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<"Third element: "<<q.front()<<endl;
    q.pop();
    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<"Empty or not: "<<q.empty();

    return 0;
}
