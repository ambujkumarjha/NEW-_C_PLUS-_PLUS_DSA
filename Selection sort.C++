#include<iostream>
using namespace std;

int main()
{
    int arr[6]={10,1,3,677,8,89};
    for(int i=0;i<6;i++)
    {
       int mindex=i;
        for(int j=i+1;j<6;j++)
        {
           
            if(arr[j]<arr[mindex])
            {
                mindex=j;
            }
        }
        swap(arr[mindex],arr[i]);
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<"\t";
    }
}