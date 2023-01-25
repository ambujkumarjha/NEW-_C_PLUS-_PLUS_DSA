#include<iostream>
using namespace std;
int sqrt(int num)
{
    int start=0;
    int end=num;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        int sq= mid*mid;
        if(sq==num)
        {
            return mid;
        }
        else if (sq<num)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<sqrt(num);

}