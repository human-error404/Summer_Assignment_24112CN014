#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Give the number of rows in matrix A and B:";
    cin>>m;
    cout<<"Give the number of coloumns in matrix A and B:";
    cin>>n;
    int A[m][n];
    int B[m][n];
    int sub[m][n];

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
            cout<<"give the value for B["<<i<<"]"<<"["<<j<<"]";
            cin>>B[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sub[i][j]=A[i][j]-B[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}