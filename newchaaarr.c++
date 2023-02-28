#include<iostream>
#include<string.h>
using namespace std;
int getlength(char sh[])
{
    int length=0;
    int i=0;
    while(sh[i]!='\0')
    {
        i++;
        length++;
    }
    return length;
}
int main()
{
    char sh[200];
   // cin>>sh;
    //cout<<sh<<endl;
    // char ph[200];
     cin.getline(sh,60);
    // cout<<ph<<endl;
    // char arr[50];
    // arr[49]={'Z'};
    // arr[1]={'r'};
    // cin>>arr;
    // cout<<arr[49]<<endl<<arr[1]<<endl<<arr;
    int l=getlength(sh);
    cout<<"The Length of the String is:"<<l;

}