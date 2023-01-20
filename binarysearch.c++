#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    
}
int BinarySearch(int arr[],int size,int key)
{ 
    int start=0,end=size-1,mid;
    mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if (arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start +end)/2;
        
        
    }

}
int main()
{
    int arr[1000],size,key;
    cout<<"Enter the Size:\n";
    cin>>size;
    cout<<"Enter the value: \n";
    cin>>key;
    printArray(arr,size);
    BinarySearch(arr,size,key);
    
}