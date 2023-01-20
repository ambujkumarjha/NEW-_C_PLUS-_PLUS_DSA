#include<iostream>
#include<limits.h>
using namespace std;
int minArr(int arr[],int size)
{
    int min= INT_MAX;
    for(int i=0;i<=size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
int Maxarr(int arr[],int size)
{
    int maxi=INT_MIN;
    for(int i=0 ;i<=size; i++)
    {

        maxi=max(maxi,arr[i]);// predifined function
        // if(max<=arr[i])
        // {
        //     max=arr[i];
        // }
    }
    return maxi;
}
int main()
{
    int size;
    cin>>size;
    int arr[1000];
    for(int i=0;i<=size;i++)
    {
        cin>>arr[i];
    }
    int M=Maxarr(arr,size);
    int m=minArr(arr,size);
    cout<<"The maximum value of an Array is:"<<M<<endl;
     cout<<"The minimum value of an Array is:"<<m<<endl;
}

