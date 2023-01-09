#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int val=1;
    while(val<=num)
    {
        cout<<val<<"\t";
        val=val+1;
    }
    cout<<endl;
    cout<<"for added number"<<endl;
    cin>>num;
    int kal=0,i=1;
    while( i<=num)
    {
        
        kal=kal+i;
        i=i+1;
        cout<<kal<<"\t"<<endl;
        
    }
    cout<<endl;
    cout<<"Enter the number "<<endl;
    int j,n,sum=0;
        ;
    cin>>n;
    i=1;
    while(i<n)
    {
        sum=sum+2;
        i=i+1;
        
    }
    cout<<sum<<endl;

}