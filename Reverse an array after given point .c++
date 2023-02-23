#include<iostream>
using namespace std ;
void reverseArr(int arr[],int m)
{
    int start=m+1,end=3;// we can take start =0; to everse whole array.
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void PrintArray(int arr[])
{
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int arr[4]={1,2,3,4},m;
    cout<<"Enter the value index no: \n";
    cin>>m;
    reverseArr(arr,m);
    PrintArray(arr);
}