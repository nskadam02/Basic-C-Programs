//take two numbvers and check wether second number is factor of first or not
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    int remain=num1%num2;
    if(remain==0)
    {
        cout<<num2<<" is factor of "<<num1;
    }
    else
    {
        cout<<num2<<" is not factor of "<<num1;
    }
    
    return 0;
}