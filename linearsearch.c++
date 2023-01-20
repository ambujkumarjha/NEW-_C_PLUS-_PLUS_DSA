#include <iostream>
using namespace std;
bool Lsearch(int arr[], int size, int key)
{
    for (int i = 0; i <= size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size;
    int arr[1000];
    cout << "Enter the size: " << endl;
    cin >> size;
    for (int i = 0; i <= size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout <<"\n"<< "Enter the key value: " << endl;
    int key;
    cin >> key;
    int linear=Lsearch(arr,size,key);
    //cout<<linear;

    if(linear==0)
    {
        cout << "NOT found"<<endl;
    }
    else{
        cout<<"Yes Found that";
    }
    
}