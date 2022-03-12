#include<iostream>
using namespace std;

void factors(int num)
{   
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int num;
    cout<<"Enter numbers to find factors :";
    cin>>num;
    cout<<"The factors are :"<<endl;
    
    factors(num);
    return 0;
}
