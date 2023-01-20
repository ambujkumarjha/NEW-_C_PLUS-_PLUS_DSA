#include<iostream>
using namespace std;
void swapp(int arr[],int size)//2nd method
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The normal an Array is: \n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nReverse of that an array is: \n";
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<"\t";
    }
//     swapp(arr,size);//<--ans throuhg 2nd method
//    for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<"\t";
//     }
}