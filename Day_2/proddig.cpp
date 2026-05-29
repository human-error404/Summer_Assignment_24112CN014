#include <iostream>
using namespace std;
int main(){
    long long n;
    cout<<"Give a number:";
    cin>>n;
    long long num=n;
    long long temp=0;
    long long prod_dig=1;
    while(num>0){
        temp=num%10;
        prod_dig*=temp;
        num/=10;
 }
    cout<<"product of digits:"<<prod_dig<<"\n";
    return 0;
}