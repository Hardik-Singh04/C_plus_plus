#include<iostream>
using namespace std;

int main()
{
    int num = 0;
    cout<<"Enter number to check for Armstrong :";
    cin>>num;
    
    int rem=0,sum=0,temp=0;
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum + (rem*rem*rem);
        temp=temp/10;
    }
    if(num==sum)
    {
        cout<<num<<" is Armstrong."<<endl;
    }
    else
    {
        cout<<num<<" is not Armstrong."<<endl;
    }

    return 0;
}
