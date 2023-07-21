#include <iostream>

using namespace std;


//Destructor(used to de-allocate memory, called when object is going out of scope)
class ashu
{
public:
    ashu()
    {
        cout<<"Constructor is called"<<endl;
    }
    ~ashu()
    {
        cout<<"Destructor is called"<<endl;
    }
    void display()
    {
        cout<<"Hello world"<<endl;
    }
};
int main()
{
    ashu obj;
    obj.display();
}
