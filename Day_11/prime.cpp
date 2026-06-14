#include <iostream>
using namespace std;
const char* prime(int a)
{
    if(a<=1)
    {
        return "not a prime";
    }
    for(int i=a-1;i>=2;i--)
    {
        int prime_1=a%i;
        if(prime_1==0)
        {
            return "not a prime";
            break;
        }
        
    }
    return "prime";
}
int main()
{
    int x;
    cout<<"give a numbers:";
    cin>>x;
    cout<<prime(x);
    return 0;
}