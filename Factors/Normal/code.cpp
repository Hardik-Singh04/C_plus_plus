#include<iostream>
using namespace std;

int main()
{
    int num=0,fact=0;
    cout<<"Enter numbers to find factors :";
    cin>>num;
    cout<<"The factors are :"<<endl;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
