#include<iostream>
using namespace std;

void check(int num)
{
  if(num%2==0)
  {
    cout<<num<<" is even.";
  }
  else
  {
    cout<<num<<" is odd.";
  }
}
int main()
{
  int num = 0;
  cout<<"Enter a number to check for Even and Odd :";
  cin>>num;

  check(num);
}
