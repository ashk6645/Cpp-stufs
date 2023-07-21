#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    cout<<binary_search(v.begin(),v.end(),3)<<endl;
    return 0;
}
