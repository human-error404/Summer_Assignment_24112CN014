#include <iostream>
using namespace std;
int main()
{
    int rem,base=1,deci=0,bin;
    cout<<"Give a binary number:";
    cin>>bin;
    while(bin!=0)
    {
        rem=bin%10;
        deci=deci+rem*base;
        bin/=10;
        base*=2;
    }
    cout<<"Decimal number is:"<<deci<<endl;
    return 0;
}