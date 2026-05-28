#include <iostream>
using namespace std;
int main(){
    long long n;
    cout<<"give a number:";
    cin>>n;
    long long temp=n;
    int count=0;
    while(temp>0){
        temp/=10;
        count++;
    }
    cout<<"nuber of digits is:"<<count<<"\n";
    return 0;


}