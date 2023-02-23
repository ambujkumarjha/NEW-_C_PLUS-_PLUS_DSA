#include<iostream>
#include<vector>


using namespace std;
int main()
{
    vector<int>v;
    cout<<"Capacity -->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity -->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity -->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    cout<<"Size-->"<<v.size()<<endl;
    cout<<"Element at index 1st: "<<v.at(1)<<endl;
    cout<<"Element at front:"<<v.front()<<endl;
    cout<<"Element at back: "<<v.back()<<endl;
    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<"\t";
    }cout<<endl;
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<"\t";
    }
    cout<<endl;
    cout<<"Befor clear  size--->>"<<v.size()<<endl;
    v.clear();
    cout<<"After clear size-->>"<<v.size()<<endl;
    for(int i:v)
    {
        cout<<i<<"\t";
    }
    vector<int>k(5,1);
    cout<<"print k"<<endl;
    for(int i: k)
    {
        cout<<i<<"\t";
    }
    vector<int>p(k);
    cout<<"\nthe elements in p :\n";
    for(int o:p)
    {
        cout<<o<<"\t";
    }



}