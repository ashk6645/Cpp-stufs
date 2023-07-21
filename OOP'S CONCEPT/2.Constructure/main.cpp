#include <iostream>

using namespace std;

class hero
{
public:
    hero()
    {
        cout<<"Constructor is called"<<endl;
    }
};
int main()
{
    cout<<"Hello"<<endl;
    hero x; //(statically called)
    cout<<"Hii"<<endl;
    hero *s = new hero; //(dynamically called)
}
