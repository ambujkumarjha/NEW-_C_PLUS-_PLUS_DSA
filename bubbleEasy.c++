#include<iostream>
using namespace std; 
int main()
{
    int arr[4]={45,6,90,1};
    for(int i=1;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
      
    }
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<"\t";
    }

}