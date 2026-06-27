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
    int sum;

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
        sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+A[i][j];
        }
        cout<<"sum of row "<<i+1<<" is:"<<sum<<endl;
    }

    
    return 0;

}