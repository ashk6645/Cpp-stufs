#include <iostream>

using namespace std;


//Inheritance
/*
class human
{
public:
    int age;
    int weight;
//private:
    int height;
public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class male: public human  //child class declaration
{
public:
    string color;
    void sleep()
    {
        cout<<"Sleeping"<<endl;
    }

};
int main()
{
    male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;
    obj1.setWeight(64);
    cout<<obj1.weight;

}*/

//Single level inheritance
/*class animal
{
public:
    int age;
    int weight;
    int height;
public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};
class Dog : public animal
{

};
class puppy : public Dog  //multilevel inheritance
{

};
int main()
{
    Dog d;
    puppy p;
    p.speak();
    cout<<p.weight<<endl;
    cout<<d.age<<endl;
    d.speak();

}*/


//Multilevel inheritance
/*class Animal
{
public:
    int age;
public:
    void bark()
    {
        cout<<"Bark"<<endl;
    }
};
class Human
{
public:
    int weight;
public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }

};

class len : public Animal, public Human
{

};
int main()
{
    len l1;
    l1.bark();
    l1.speak();
}*/


// Hierarchical Inheritance
/*class Human
{
public:
    void speak()
    {
        cout<<"Voice"<<endl;
    }
};
class Male : public Human
{
    public:
    void speak1()
    {
        cout<<"Male voice"<<endl;
    }
};
class Female : public Human
{
public:
    void speak2()
    {
        cout<<"Female voice"<<endl;
    }
};
int main()
{
    Human H;
    H.speak();
    Male M;
    M.speak1();
    Female F;
    F.speak2();
}*/

//Hybrid Inheritance (Combination of more than one type of inheritance)
/*class living
{
public:
    void speak()
    {
        cout<<"Voice"<<endl;
    }
};
class Male
{
public:
    void speak1()
    {
        cout<<"Male voice"<<endl;
    }
};
class Female
{
public:
    void speak2()
    {
        cout<<"Female voice"<<endl;
    }
};
class Robot : public living, public Male, public Female
{
public:
    void speakR()
    {
        cout<<"All voice"<<endl;
    }
};
int main()
{
    Robot x;
    x.speakR();
    x.speak();
    x.speak1();
    x.speak2();
}*/


//Inheritance Ambiguity
class A
{
public:
    void fun()
    {
        cout<<"I am A"<<endl;
    }
};
class B
{
public:
    void fun()
    {
        cout<<"I am B"<<endl;
    }
};
class C: public A, public B{};
int main()
{
    C obj;
    obj.A::fun();
    obj.B::fun();
}
