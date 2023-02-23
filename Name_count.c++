#include<iostream>
using namespace std;

bool CheckPlaindome(char name[],int len)
{
    int start=0;
    int end =len -1;
    while(start<=end)
    {
        if(name[start]!=name[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
void reverse(char name[],int len)
{
    int start=0;
    int end=len-1;
    while(start<end)
    {
        swap(name[start++],name[end--]);
    }
}

int getlength(char name[])
{
    int count =0;
    for(int i=0;name[i] !='\0';i++)
    {
        count++;
    }
    return count;
} 
int main()
{
    char name[20];
    cout<<"Enter the name of your \n";
    cin >>name;
    cout<<"Your name is :"<<name<<endl;
    int len=getlength(name);
    cout<<"Length: "<<len<<endl;
    reverse(name,len);
    cout<<"Your name is :"<<name<<endl;


}