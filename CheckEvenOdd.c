#include<stdio.h>
//preprocessor directive
#define TRUE 1           //true==1
#define FALSE 0

typedef int BOOL; //whenever we use BOOL it is consider as int (another name for int)

BOOL CheckEven(int);
int main()
{
    int iVal=0;
    BOOL bRet;
    printf("Enter number:");
    scanf("%d",&iVal);
    bRet=CheckEven(iVal);
    if(bRet==TRUE)
    {
        printf("IT is even");
    }
    else
    {
        printf("It is Odd");
    }
    return 0;
}
BOOL CheckEven(int iNum)
{
    int iAns=iNum%2;
    if(iAns==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}