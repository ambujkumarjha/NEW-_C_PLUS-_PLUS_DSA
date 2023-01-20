#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;
    int num[10]; // declare the array.
    for (int i = 0; i <= size; i++)// takeing input
    {
        cin >> num[i];
    }
    for (int i = 0; i <= size; i++)// printing output
    {
        cout << num[i] << "\t";
    }

    //cout<<num[1]; it will give you the 2nd index value
    //num[1]={2}; in this we are assigning the value at index 1 value 2
    
}