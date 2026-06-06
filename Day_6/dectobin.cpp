#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int n;
    cout<<"Give a number";
    cin>>n;
    bitset<16>binary(n);
    cout<<"Binary:"<<binary<<endl;
    return 0;
}