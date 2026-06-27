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
    int trans[m][n];

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
            trans[i][j]=A[j][i];
        }
    }
    if(trans[m][n]==A[m][n])
    {
        cout<<"symmetric matrix";
    }
    else
    {
        cout<<"not a symmetric matrix";
    }
    return 0;

}