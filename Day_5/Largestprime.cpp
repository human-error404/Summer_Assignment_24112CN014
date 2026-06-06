#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give a number";
    cin>>n;
    int num=n,lar=1;
    for(int i =2;i<=num;i++)
    {
        while(num%i==0)
        {
            lar=i;
            num=num/i;
        }
    }
    cout<<"largest prime factor is"<<lar<<endl;
}