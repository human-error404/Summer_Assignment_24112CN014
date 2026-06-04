#include <iostream>
using namespace std;
int main()
{
    int x=0,y=1,z=0;
    int temp,n;
    cout<<"Give a number";
    cin>>n;
    while(z<=n){
        cout<<"\n"<<z;
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}