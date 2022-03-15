#include <iostream>
using namespace std;
int main()
{
        int ch;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"Monday";
                break;
            case 2:cout<<"Tuesday";
                break;
            case 3:cout<<"Wednesday";
                break;
            case 4:cout<<"Thursday";
                break;
            case 5:cout<<"Friday";
                break;
            case 6:cout<<"Saturday";
                break;
            default :cout<<"Wrong Choice.";
        }
}
