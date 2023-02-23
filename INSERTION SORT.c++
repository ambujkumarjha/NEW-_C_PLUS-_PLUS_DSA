#include<iostream>
using namespace std ;
void PrintArray(int arr[],int size)
{
    cout<<"plzz! enter the value :\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your entered array is: \n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
void InsertionSort(int arr[],int size)
{
    int i=1;
    while(i<size)
    {
        int j=i-1;
        int temp=arr[i];
        while(j>=0)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];

            }
            else
            {
                break;
            }
            j--;
        }
       arr[j+1]=temp;
        i++;
    }
    cout<<"\nThe sorted array is:\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }

}
int main()
{
    int arr[999],size;
    cout<<"Enter the size of the Array \n: ";
    cin>>size;
    PrintArray(arr,size);
    InsertionSort(arr, size);
}
