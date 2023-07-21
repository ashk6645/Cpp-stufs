#include <iostream>
#include <string>

using namespace std;

//(Nesting of member function)
class Average
{
public:
    int a,b;
    void read();
    void print();
    int avg();
};
void Average :: read()
{
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
}
void Average :: print()
{
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    cout<<"Average is "<<avg();
}
int Average :: avg()
{
    return (a+b)/2;
}
int main()
{
    Average A;
    A.read();
    A.print();
}
