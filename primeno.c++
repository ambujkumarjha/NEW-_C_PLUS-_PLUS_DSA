#include<iostream>
using namespace std;
int main()
{
    int num ,i=2,j;
    cin>>num;
    while(i<num)
    {
        if(num%i==0)
        {
            cout<<"not prime no"<<endl;

        }
         else
         {
         cout<<"prime no"<<endl;
         }
     i=i+1;
    }
 
}