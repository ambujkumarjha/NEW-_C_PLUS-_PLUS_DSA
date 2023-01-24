#include<iostream>
using namespace std;
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int MountainPeak(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else 
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return arr[start];
}
int main()
{
    int size,arr[1000],key;
    cout<<"Enter the size of Array: "<<endl;
    cin>>size;
    PrintArray(arr,size);
    // cout<<"Enter the key value: ";
    // cin>>key;
     MountainPeak(arr,size);
    int peak= MountainPeak(arr,size);
    cout<<"The peak of the  mountain is: "<<peak;
}