#include<iostream>
using namespace std;
void division(int a,int b)
{
    int divi=0;
    divi=a/b;
    cout<<"Division is  :"<<divi;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    division(a,b);
    return 0;
}
