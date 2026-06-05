#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum=0,temp=0;
    cout<<"Give a number";
    cin>>n;
    int num;
    num=n;
    for(int i=1;i<num;i++)
    {
        temp=num%i;
        if(temp==0)
        {
             cout<<i<<endl;
        }
    }
}
