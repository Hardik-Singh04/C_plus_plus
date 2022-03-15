#include <iostream>
using namespace std;

void show(int ch)
{
    switch(ch)
        {
            case 1:
                cout<<"Day : Tuesday"<<endl;
                break;
            case 2:
                    cout<<"Date : 15"<<endl;
                break;
            case 3:
                cout<<"Month : March"<<endl;
                break;
            case 4:
                cout<<"Year : 2022"<<endl;
                break;
            
            default :cout<<"Wrong Choice.";
        }
}
int main()
{
        int ch;
        cout<<"1.Day"<<endl;
        cout<<"2.Date"<<endl;
        cout<<"3.Month"<<endl;
        cout<<"4.Year"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;

        show(ch);     
}
