#include <iostream>
using namespace std;
int main()
{
    int base,power;
    cout<<"Enter base and power:";
    cin>>base>>power;
    int result=1;
    for(int i=0;i<power;i++)
    {
        result*=base;
    }
    cout<<result<<endl;
}