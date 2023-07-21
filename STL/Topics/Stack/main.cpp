#include <iostream>
#include <stack>
//Stack follows (LIFO) last in first out
using namespace std;

int main()
{
    stack<string> s;
    s.push("Ashutosh");
    s.push("Pratap");
    s.push("Singh");
    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;
    s.pop();
    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty();


    return 0;
}
