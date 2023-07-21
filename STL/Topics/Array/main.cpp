#include <iostream>
#include <array>  //(including array library)
#include <vector>

using namespace std;


int main()
{
    int basic[3] = {1,2,3,};  //(static array)
    array<int, 4> a = {1,2,3,4};  //(STL array) (Implementation of this array is possible due to the above array)
    int size = a.size();  //(size of STL array)
    for(int i = 0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at second index "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;
    return 0;
}


