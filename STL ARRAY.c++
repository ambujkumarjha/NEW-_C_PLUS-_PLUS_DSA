#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basic[4]={1,2,3,4};
    array<int ,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<"\t";
    }cout<<"Element at index 2: "<<a.at(2)<<endl;
    cout<<"to check Empty or not : "<<a.empty()<<endl;
    cout<<"first Element"<<a.front()<<endl;
    cout<<"the last element"<<a.back()<<endl;
    


}