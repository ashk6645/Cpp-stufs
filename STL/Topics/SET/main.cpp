#include <iostream>
#include <set>
using namespace std;

int main()
{ //simple set will show the elements in shorted form
    //repeated elements will be counted at once
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(3);
    s.insert(3);
    for(int i:s)
    {
        cout<<i<<endl;
    }
    s.erase(s.begin());
    for(int i:s)
    {
        cout<<i<<endl;
    }
    cout<<"5 is present or not "<<s.count(5)<<endl;

    return 0;
}
