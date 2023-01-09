#include<iostream>
using namespace std ;
int main()
{
    int n,dig,ans=0;
    cout<<"Enter the number "<<endl;
    cin>>n;
    while(n!=0)
    {
        dig=n%10;
        ans=(ans*10)+dig;
        n=n/10;
    }
    cout<<ans<<endl;
}