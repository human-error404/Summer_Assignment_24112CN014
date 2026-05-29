#include <iostream>
using namespace std;
int main(){
    long long n;
    int sum=0;
    cout<<"Give a number";
    cin>>n;
    long long num=n;
    long long temp=0;
    while(num>0){
        temp=num%10;
        sum+=temp;
        num/=10;

    }
    cout<<"sum of digits is:"<<sum<<"\n";
    return 0;


}