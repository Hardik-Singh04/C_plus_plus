# include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,temp,r,flg=0;
 cout << " Input a number: ";
 cin >> num;
 temp=num;
    while(num>0)
        {
            if(num % 10 == 0)
            {
            flg=1;
            break;
            }
			num/=10;
        }
            if(temp>0 && flg==1)
            {
            cout << "Duck Number."<<endl;
            }
            else
            {
            cout << " Not a Duck Number."<<endl;
            }
}
