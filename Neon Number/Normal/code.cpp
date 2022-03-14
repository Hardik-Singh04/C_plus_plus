# include <bits/stdc++.h>
using namespace std;

void find(int num)
{
    
}
int main()
{
    int num,rem=0,sq,sum=0;
	
    cout << " Input a number: ";
    cin >> num;
   
    sq=num*num;

    while(sq>0)
    {
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
    }
    if(sum==num)
    {
        cout << "Neon Number."<<endl;
    }
    else
    {
        cout << " Not a Neon Number."<<endl;
    }
}
