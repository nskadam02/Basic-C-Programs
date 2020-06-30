#include<iostream>
using namespace std;
int main()
{
    int iNum1,iNum2;
    cout<<"Enter two numbers:"<<endl;
    cin>>iNum1>>iNum2;
    if(iNum1>iNum2)
    {
        cout<<"Maximum number is:"<<iNum1;
    }
    else if(iNum2>iNum1)
    {
        cout<<"Maximum is:"<<iNum2;
    }
    else
    {
        cout<<"Both are equal";
    }
    
    
}