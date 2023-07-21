#include <iostream>

using namespace std;


//Encapsulation
class student
{
private:
    string name;
    int age;
    int height;
public:
    int getAge()
    {
        return this->age;
    }
};
int main()
{
        student first;
        cout<<"Every thing is going good";

    return 0;
}
