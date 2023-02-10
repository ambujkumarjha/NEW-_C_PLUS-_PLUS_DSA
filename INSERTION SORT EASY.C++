#include<iostream>
using namespace std;
int main()
{
    int arr[4]={10,6,4,78};
    for(int i=1;i<4;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(j;j>=0;j--)
        {
            if(temp<arr[j])
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<"\t";

    }
}