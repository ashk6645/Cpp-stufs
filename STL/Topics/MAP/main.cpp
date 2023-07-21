#include <iostream>
#include <map>
using namespace std;
//one key will point to one value
int main()
{
    map<int,string> m;
    m[1] = "Ashu";
    m[22] = "Devil";
    m[12] = "RDX";
    for(auto i:m)
    {
        cout<<i.first<<endl;
    }
    return 0;
}
