#include<iostream>
using namespace std;
int main(){
    int n;
    int i=0;
    cin>>n;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
