#include<stdio.h>  //for input output
int Addition(int,int); //prototype of helper function

int main()
{
    //local variables
    int iVal1=0;
    int iVal2=0;
    int iResult=0;

    printf("Enter two numbers:");
    scanf("%d %d",&iVal1,&iVal2);
    iResult=Addition(iVal1,iVal2);
    printf("Addition is %d",iResult);
    return 0;
}
int Addition(int iNum1,int iNum2)
{
    return iNum1+iNum2;
}
