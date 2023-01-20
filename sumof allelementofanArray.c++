#include<iostream>
using namespace std;
int Add(int arr[],int size)
{
    int add=0;
    for(int i=0;i<=size;i++)
    {
        add=add+arr[i];
    }
    return add;
}
int main()
{
    int size;
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;
    int arr[1000];
    for(int i=0;i<=size;i++)
    {
        cin>>arr[i];
    }
    int a=Add(arr,size);
    cout<<"The sum of value of array is: "<<a<<endl;
}
