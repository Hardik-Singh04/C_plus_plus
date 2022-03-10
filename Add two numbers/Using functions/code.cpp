#include<iostream>
using namespace std;
void add(int a,int b)
{
    int sum=0;
    sum=a+b;
    cout<<"Sum is :"<<sum;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    add(a,b);
    return 0;
}
