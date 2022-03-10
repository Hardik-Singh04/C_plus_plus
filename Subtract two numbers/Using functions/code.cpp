#include<iostream>
using namespace std;
void diff(int a,int b)
{
    int subtract=0;
    if(a>b)
    {
        subtract=a-b;
        cout<<"Subtraction of a-b is :"<<subtract;
    }
    else
    {
        subtract=b-a;
        cout<<"Subtraction of b-a is :"<<subtract;
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    diff(a,b);
    return 0;
}
