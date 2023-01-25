#include<iostream>
using namespace std;

void Arrayprint(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Array is this: \n";
    for(int i=0;i<size;i++)
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
int FindTheElement(int arr[],int s,int e,int key)
{
    int start =s;
    int end=e;
    int mid =start+(end-start)/2;
    while(start<=end)
    {
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        else 
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
    
}
int main()
{
    int size,arr[999],key;
    cout<<"Enter the Size of the Array: ";
    cin>>size;
    cout<<"\nEnter the element of that array: \n";
    Arrayprint(arr,size);
    cout<<"\n Enter the key element:";
    cin>>key;
    int e=size-1;
    int s =0;
   // FindTheElement(arr,size,key);
    int pivote =ArrayPivote(arr,size);
    if(key>=arr[pivote] && key<=arr[e] )
    {
       cout<<  FindTheElement(arr,pivote,e,key);
    }else
    {
        cout<<FindTheElement(arr,0,pivote-1,key);
    }

}