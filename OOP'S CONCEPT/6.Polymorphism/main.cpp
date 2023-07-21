#include <iostream>

using namespace std;

/*Polymorphism: (Having many form)
I. Compile time Polymorphism
(i).Function overloading*/
class A
{
public:
    void say()
    {
        cout<<"Hello Ashu"<<endl;
    }
    int say(char name)
    {
        cout<<"Hello Rishabh"<<endl;
        return 1;
    }
};
int main()
{
    A obj;
    obj.say();
}



