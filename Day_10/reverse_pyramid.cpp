#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=5;i>=0;i--)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<" ";
            
        }
        for(k=1;k<=(2*i)-1;k++)
            {
                cout<<"*";
            }
        cout<<endl;

    }
    return 0;
}