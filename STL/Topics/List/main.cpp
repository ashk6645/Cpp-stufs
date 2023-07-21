#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    cout<<"Print l: ";
    for(int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
    cout<<"After erase: ";
    for(int i:l)
    {
        cout<<i<<" "<<endl;
    }
    return 0;
}
