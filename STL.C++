#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(10,4);
    vector<int>p(v);
    for(int i:p)
    {
        cout<<i<<"\t";
    }


}