#include<iostream>
using namespace std;

void checkniven(int num)
{   
    int rem=0,sum=0,temp=0;
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum + rem;
        temp=temp/10;
    }
    if(num%sum==0)
    {
        cout<<num<<" is Niven Number."<<endl;
    }
    else
    {
        cout<<num<<" is not Niven Number."<<endl;
    }
}
int main()
{
    int num = 0;
    cout<<"Enter number to check for Niven Number :";
    cin>>num;
    
    checkniven(num);
    return 0;
}
