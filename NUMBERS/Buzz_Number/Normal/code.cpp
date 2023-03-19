#include<iostream>
using namespace std;

int main()
{
    int num = 0;
    cout<<"Enter number to check for Buzz Number :";
    cin>>num;
    if(num%7==0 || num%10==7)
    {
        cout<<num<<" is Buzz Number."<<endl;
    }
    else
    {
        cout<<num<<" is not Buzz Number."<<endl;
    }

    return 0;
}
