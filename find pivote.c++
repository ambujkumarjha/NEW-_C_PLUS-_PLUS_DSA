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
int ArrayPivote(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else 
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main()
{
    int size,arr[1000],key;
    cout<<"Enter the size of Array: "<<endl;
    cin>>size;
    PrintArray(arr,size);
    // cout<<"Enter the key value: ";
    // cin>>key;
    ArrayPivote(arr,size);
    cout<<"\n";
    int pivote=ArrayPivote(arr,size);
    cout<<"the pivote of the arrray is : "<<pivote;
}