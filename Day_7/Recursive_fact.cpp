#include <iostream>
using namespace std;
long long fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Give a number";
    cin>>n;
    cout<<"The factorial is:"<<fact(n)<<endl;
}