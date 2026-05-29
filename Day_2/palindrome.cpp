#include <iostream>
using namespace std;
int main(){
    long long n;
    cout<<"give number to check palindrome:";
    cin>>n;
    long long num=n;
    long long reversed_num=0;
    long long temp=0;
    while(num>0){
        temp=num%10;
        reversed_num=reversed_num*10+temp;
        num/=10;
    }
    if(reversed_num==n){
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
}