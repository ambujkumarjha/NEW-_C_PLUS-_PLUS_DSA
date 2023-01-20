#include<iostream>
using namespace std ;

void SwapAlternate(int arr[],int size)
{
    for(int i=0;i<size;i=i+2)//i+=2
    {
        if(i+1<size)
        {
            int a=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=a;
        }
        
        
        // if(i+1<size) //easy way
        // {
        //     swap(arr[i],arr[i+1]);
        // }
    }
}
int main()
{
    int size;
    int arr[1000];
    cout<<"enter the size of array: "<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"your Entered array is: \n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    SwapAlternate(arr,size);
    cout<<"\nYour Swaped array is: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }

}
