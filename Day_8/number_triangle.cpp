#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
            {
                cout<<"1";
            }
            else if(j==1)
            {
                cout<<"2";
            }
            else if(j==2)
            {
                cout<<"3";
            }
            else if(j==3)
            {
                cout<<"4";
            }
            else if(j==4)
            {
                cout<<"5";
            }
        }
        cout<<endl;

    }
    
}