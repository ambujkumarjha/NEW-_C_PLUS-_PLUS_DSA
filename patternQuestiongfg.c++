#include<iostream>
using namespace std;
int main()
{
    int i,j,n ,count=0;
    cin>>n;
    i=n;
    while(i>0)
    {
        j=n;
        while(j>0)
        {
            while(count<i)
            {
                cout<<j<<" ";
                count++;

            }
            
          j--; 
        }
        cout<<endl;
        i--;
    }
}