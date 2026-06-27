#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Give the number of rows in matrix A:";
    cin>>m;
    cout<<"Give the number of coloumns in matrix A:";
    cin>>n;
    int A[m][n];
    int trace=0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"give the value for A["<<i<<"]"<<"["<<j<<"]";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                trace=trace+A[i][j];
            }
        }
    }
    cout<<"The sum of diagnol elememts is:"<<trace;
    return 0;

}