#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give number to print table of:";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n*i<<"\n";
    }
    return 0;
}