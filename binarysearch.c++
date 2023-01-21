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
    cout<<"\n";
    
    
}
int BinarySearch(int arr[],int size,int key)
{ 
    int start=0,end=size-1,mid;
  //  mid=(start+end)/2;
    mid=start+(end-start)/2;
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
        //mid=(start +end)/2;
        mid=start+(end-start)/2;//optimised way
        
    }
    return -1;

}
int main()
{
    int arr[1000],size,key;
    cout<<"Enter the Size:\n";
    cin>>size;
     printArray(arr,size);
    cout<<"Enter the value: \n";
    cin>>key;
   
    
    int index =BinarySearch(arr,size,key);
    if(index==-1)
    {
        cout<<"not found";
    }else
    {
         cout<<"congratulation we found that at index : "<<index;
    }
    
   
}