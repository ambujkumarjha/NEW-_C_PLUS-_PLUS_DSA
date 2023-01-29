#include<iostream>
using namespace std;
void ArrayPrint(int arr[],int size)
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

bool PossibleSol(int arr[],int size ,int mid,int student)
{
    int studentCount=1;
    int pagesum =0;
    for(int i=0;i<size;i++)
    {
        if(pagesum=+arr[i]<=mid)
        {
             pagesum=+arr[i];
        }
        else
        {
         studentCount++;
         if(studentCount>student||mid<arr[i])
         {
            return false;
         }
         pagesum=0;
         pagesum+=arr[i];
         
        }
    }
    return true;
}
int sol1(int arr[],int size,int student)
{
    int ans=-1;
    int start=0;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if(PossibleSol( arr,size,mid,student))
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    
    return ans;
}
int main()
{
    int size,arr[1000],student;
    cout<<" Enter the no. of the book: ";
    cin>>size;
    cout<<"Enter the pages of the book: \n";
    ArrayPrint(arr,size);
    cout<<"\nEnter the no of student: ";
    cin>>student;

    int s=sol1(arr,size,student);
    cout<<"The ans is : "<<s;


}