#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=-1;
    int b=1;
    for(int i=0;i<=n;i++)
    { 
        int c=a+b;
        cout<<c<<"\t";
        a=b;
        b=c;
    }

}