#include <iostream>
using namespace std;
int main(){
    long long num;
    cout<<"give nuber to reverse:";
    cin>>num;
    long long reversed_num=0;
    long long temp=0;
    while(num>0){
        temp=num%10;
        reversed_num=reversed_num*10+temp;
        num/=10;
    }
    cout<<"reversed number is:"<<reversed_num<<"\n";
    return 0;
}