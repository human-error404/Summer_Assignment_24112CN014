#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a positive number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Final sum is:"<<sum<<"\n";
    return 0;
}