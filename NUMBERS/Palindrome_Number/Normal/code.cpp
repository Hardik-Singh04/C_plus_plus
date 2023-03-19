#include<iostream>
using namespace std;

int main()
{
    int num = 0,rem=0,sum=0,temp=0;
    cout<<"Enter number to check for Palindrome :";
    cin>>num;
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        sum=(sum*10) + rem;
        temp=temp/10;
    }

    if(num==sum)
    {
        cout<<num<<" is Palindrome."<<endl;
    }
    else
    {
        cout<<num<<" is not Palindrome"<<endl;
    }
    return 0;
}
