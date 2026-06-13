#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            cout<<" ";
            
        }
        for(j=1;j<=i;j++)
            {
                cout<<(char)('A'+j-1);
            }
    
            for(j=i-1;j>=1;j--)
            {
                cout<<(char)('A'+j-1);
            }

        cout<<endl;

    }
    return 0;
}