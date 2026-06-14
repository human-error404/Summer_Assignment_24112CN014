#include <iostream>
using namespace std;
void fibo(int a)
{
    int x=0,y=1,z=0;
    while(z<=a){
        cout<<"\n"<<z;
        x=y;
        y=z;
        z=x+y;
    }
}
int main()
{
    int x;
    cout<<"give a numbers:";
    cin>>x;
    fibo(x);
    return 0;
}