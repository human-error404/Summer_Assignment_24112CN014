#include <iostream>
using namespace std;
int main()
{
    int m,n,o;
    cout<<"Give the number of rows in matrix A:";
    cin>>m;
    cout<<"Give the number of rows in matrix B and coloumns in matrix A:";
    cin>>n;
    cout<<"Give the number of coloumns in matrix B:";
    cin>>o;
    int A[m][n];
    int B[n][o];
    int mul[m][o];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"give the value for A["<<i<<"]"<<"["<<j<<"]";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<o;j++)
        {
            cout<<"give the value for B["<<i<<"]"<<"["<<j<<"]";
            cin>>B[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<o;j++)
        {
            mul[m][o]=0;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<o;j++)
        {
            for(int k=0;k<n;k++)
            {
            mul[i][j]=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<o;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}