#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"give a number:";
    cin>>n;
    int num=n;
    int temp=0,sum=0;
    for(int i=1;i<n;i++)
    {
        temp=num%i;
        if(temp==0){
            sum+=i;
        }
    }
    if(sum==n)
    {
        cout<<"number is perfect";
    }
    else
    {
        cout<<"number isn't perfect";
    }
    return 0;
}