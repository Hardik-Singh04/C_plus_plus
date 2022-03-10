#include<iostream>
using namespace std;
int main()
{
    int a,b,subtract=0;
    cout<<"Enter two numbers :";
    cin>>a>>b;
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
    return 0;
}
