#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>v;

    vector<int> a(5,1);
    cout<<"Print a: ";
    for(int i:a)
    {
        cout<<i<<" ";
    }cout<<endl;

    vector<int> last(a);
    cout<<"Print last: ";
    for(int i:last)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"\nCapacity of v "<<v.capacity()<<endl;
    v.push_back(1); //used to insert an element
    cout<<"Capacity of v "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity of v "<<v.capacity()<<endl; //capacity tells the available space for element
    v.push_back(3);
    cout<<"Size of v "<<v.size()<<endl;  //size tells the number of element
    cout<<"Capacity of v "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Capacity of v "<<v.capacity()<<endl;
    cout<< "Element at index two "<<v.at(2)<<endl;
    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    //pop through out the value
    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" "<<endl;
    }
    cout<<"Before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;



    return 0;
}
