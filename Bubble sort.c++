#include<iostream>
using namespace std;
void PrintArray(int arr[],int size)
{
    cout<<"Enter the elements \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"These are your input : \n";
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
void BubbleSort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int arr[1000],size;
    cout<<"Enter the Size of an array: \n ";
    cin>>size;
    PrintArray(arr,size);
    cout<<"\nYour sorted array is: \n";
    BubbleSort(arr,size);
    //PrintArray(arr,size);

}