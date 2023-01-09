#include<iostream>
using namespace std ;
int main()
{
    int num,m,musk;
    cin>>num;
    m=num;
    while (m!=0)
    {
        musk=(musk << 1) | 1;
        m = m >> 1;
        /* code */
    }
    int ans=(~num)&musk;
cout<<ans;    
}