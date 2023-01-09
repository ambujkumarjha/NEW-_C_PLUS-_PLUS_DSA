#include<iostream>
using namespace std;
bool isprime(int num)
{
    for(int i=2;i<num-1;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    int p=isprime(n);
    if(p==1)
    {
        cout<<"prime number"<<endl;
    }else{
        cout<<"not prime no"<<endl;
    }
    
}












