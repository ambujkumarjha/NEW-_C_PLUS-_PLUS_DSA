#include<iostream>
#include<math.h>
using namespace std;
int main()
{
     float num1,num2;int operation;
    cout<<"Enter the num1: "<<endl;
    cin>>num1;
    cout<<"Enter the num2: "<<endl;
    cin>>num2;
    cout<<"Enter the operation :-"<<endl;
    cout<<" Click 1 for addtion \n Click 2 for subtraction \n Click 3 for Multiplication \n Click 4 for Division \n Click 5 for power \n :";
    cin>>operation;
    switch (operation)
    {
    case 1:
            cout<<"Your answer is :"<<num1+num2<<endl<<"Thanks for using calulator";
        break;
     case 2:
            cout<<"Your answer is :"<<num1-num2<<endl<<"Thanks for using calulator";
        break;
     case 3:
            cout<<"Your answer is :"<<num1*num2<<endl<<"Thanks for using calulator";
        break;
     case 4:
            cout<<"Your answer is :"<<num1/num2<<endl<<"Thanks for using calulator";
        break;
     case 5:
            cout<<"Your answer is :"<<pow(num1,num2)<<endl<<"Thanks for using calulator";
        break;
    
    default: 
            cout<<"Please enter the valid option";
        break;
    }


}