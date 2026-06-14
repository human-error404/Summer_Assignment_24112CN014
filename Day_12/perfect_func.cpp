#include <iostream>
using namespace std;
void perfect(int a)
{
    int num=a;
    int temp=0,sum=0;
    for(int i=1;i<a;i++)
    {
        temp=num%i;
        if(temp==0){
            sum+=i;
        }
    }
    if(sum==a)
    {
        cout<<"number is perfect";
    }
    else
    {
        cout<<"number isn't perfect";
    }
}
int main()
{
    int x;
    cout<<"give a numbers:";
    cin>>x;
    perfect(x);
    return 0;
}