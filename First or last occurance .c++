#include<iostream>
using namespace std;
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    } for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}
int LeftMostSearch(int arr[],int size,int key)
{
    int ans=-1;
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(key<arr[mid])
        {
            end=mid-1;
        }
        else if(key==arr[mid])
        {
            ans=mid;
            end=mid-1;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int RightMostsearch(int arr[],int size,int key)
{
    int ans=-1;
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(key<arr[mid])
        {
            end=mid-1;
        }
       else if(key>arr[mid])
        {
            start=mid+1;
        }
        else if(key==arr[mid])
        {
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int size,arr[1000],key;
    cout<<"enter the the Size: ";
    cin>>size;
    cout<<"Enter the values:-";
    PrintArray(arr,size);
    cout<<endl;
    cout<<"Enter the key value: ";
    cin>> key;
    LeftMostSearch(arr, size, key);
    RightMostsearch(arr, size, key);
    int L=LeftMostSearch(arr, size, key);
    int R=RightMostsearch(arr, size, key);
    cout<<"The Left & Right most occurance is: ("<<L<<","<<R<<")."<<endl;
}