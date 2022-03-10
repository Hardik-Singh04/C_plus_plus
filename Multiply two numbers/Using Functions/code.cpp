#include<iostream>
using namespace std;
void multiply(int a,int b)
{
    int multi=0;
    multi=a*b;
    cout<<"Multiplication is  :"<<multi;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    multiply(a,b);
    return 0;
}
