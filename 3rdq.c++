#include<iostream>
using namespace std;
int main()
{ 
    char val;
    cin>>val;
        if(val>=48&&val<=57)
        {
            cout<<"numeric"<<endl;

        }
        else if(val>=65 && val<=90)
        {
            cout<<"capital"<<endl;
        }else if(val>=97 && val<=122){
            cout<<"small letters"<<endl;
        }
}