#include<iostream>
using namespace std;

//1(Class --> Class is an user defined data type)
/*class Hero
{
public:
    int value;
private:
    char name;
public:
char getname()
{
    return name;
}
void setname(char name)
{
    name = 'A';
}
};
int main()
{
    Hero obj;
    cout<<"Name:"<<obj.getname()<<endl;
    obj.value = 100;
    //cout<<"Name:"<<obj.name<<endl;
    cout<<"Value:"<<obj.value<<endl;
    cout<<"Size of object: "<<sizeof(obj);
}*/


//2(Inside class definition)
/*class Myclass
{
public:
    void myMethod()  //(Function defined inside the class)
    {
        cout<<"Hello Developer";
    }
};
int main()
{
    Myclass myobj;
    myobj.myMethod();  //(Function called)
}*/


//3(Outside class definition)



//4(Class)
/*class Employee
{
private:
    int a,b,c;
public:
    int d,e;
    void setData(int a1, int b1,int c1); //(Function declaration)
    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;

    }

};
void Employee :: setData(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee Ashu;
    Ashu.d = 9;
    Ashu.e = 6;
    Ashu.setData(1,2,4);
    Ashu.getData();

}*/


//5(Size of)
/*class hero
{
public:
    int health;
    char level;

};
int main()
{
    hero h1; //(Object of the class)
    h1.health = 70;
    h1.level = 'A';
    cout<<"health is: "<<h1.health<<endl;
    cout<<"level is: "<<h1.level;
}*/

//6(Accessing the private members using function)

/*class hero
{
private:
    int health;
public:
    char level;
    void print()
    {
        cout<< level << endl;
    }
    int gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;

    }
    void setlevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    hero ashu;
    cout<<"ashu health is: "<<ashu.gethealth()<<endl; //(accessing private member)
    ashu.sethealth(40); //(using sethealth function)
    cout<<"ashu health is: "<<ashu.gethealth()<<endl;
    cout<<"size of ashu is: "<<sizeof(ashu);
}*/

//7(Static vs dynamic memory allocation)
/*class hero
{
private:
    int health;
public:
    char level;
    int gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
    void sethealth(int h)
    {
        health = h;
    }

};
int main()
{
    //static allocation
    hero ashu;
    ashu.sethealth(40);
    ashu.setlevel('b');
    cout<<"Ashu level is:"<<ashu.level<<endl;
    cout<<"Ashu health is:"<<ashu.gethealth()<<endl;

    //Dynamic allocation
    hero *z = new hero;
    z->sethealth(89);
    z->setlevel('A');
    cout<<"Health is :"<<(*z).level<<endl;
    cout<<"Level is :"<<(*z).gethealth();
}*/

//(Using static and dynamic memory allocation)
class world
{
    int plants;
public:
    int humans;
    char alphabets;
    int getplants()
    {
        return plants;
    }
    int gethumans()
    {
        return humans;
    }
    void setplants(int p)
    {
        plants = p;
    }
    void sethumans(int h)
    {
        humans = h;
    }
};
int main()
{
    // static allocation
    world earth;
    earth.setplants(1000);
    earth.sethumans(10000);
    cout<<"Plants are: "<<earth.getplants()<<endl;
    cout<<"Humans are: "<<earth.gethumans()<<endl;


    // dynamic allocation
    world *x = new world;
    x->setplants(2000);
    x->sethumans(20000);
    cout<<"Plants in dynamic are: "<<x->getplants()<<endl;
    cout<<"Humans in dynamic are: "<<x->humans;
}

//8(Accessing the private member of a class using the getter and setter)
/*class ashu
{
    int rollno;
    char name[20];
    float marks;
public:
    int getrollno()
    {
        return rollno;
    }
    int getmarks()
    {
        return marks;
    }
    void setrollno( int a)
    {
        rollno = a;
    }
    void setmarks( int m )
    {
        marks = m;
    }

};
int main()
{
    ashu obj;
    obj.setmarks(56);
    cout<<obj.getmarks()<<endl;
    obj.setrollno(21);
    cout<<obj.getrollno();
}*/


//9(Defining member function outside the class)
/*class ashu
{
    int rollno;
    char name[20];
    int marks;
public:
    int getrollno();
    int getmarks();
    void setrollno( int a)
    {
        rollno = a;
    }
    void setmarks( int m)
    {
        marks = m;
    }
};
int ashu::getmarks()
{
    return marks;
}
int ashu::getrollno()
{
    return rollno;
}
int main()
{
    ashu obj;
    obj.setmarks(90);
    obj.setrollno(21);
    cout<<obj.getmarks()<<endl;
    cout<<obj.getrollno();
}*/
