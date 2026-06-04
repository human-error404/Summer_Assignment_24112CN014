#include <iostream>
using namespace std;
int main(){
    int x=0,y=1,z=0;
    int n;
    cout<<"Give nth term of fibonacci to print";
    cin>>n;
    while(z<=n){
        x=y;
        y=z;
        z=x+y;
    }
    cout<<"The"<<n<<"term is"<<z<<endl;
    return 0;
}