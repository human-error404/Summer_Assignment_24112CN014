#include <iostream>
using namespace std;
int main()
{
    int bin,count=0;
    cout<<"give a binary number";
    cin>>bin;
    while(bin!=0)
    {
        if(bin%2!=0)
        {
            count++;
        }
        bin/=10;
    }
    cout<<"Set bits in the given number is:"<<count<<endl;
    return 0;
}