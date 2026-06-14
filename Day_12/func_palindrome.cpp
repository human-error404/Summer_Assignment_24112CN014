#include <iostream>
using namespace std;
string pali(int a)
{
    long long num=a;
    long long reversed_num=0;
    long long temp=0;
    while(num>0){
        temp=num%10;
        reversed_num=reversed_num*10+temp;
        num/=10;
    }
    if(reversed_num==a){
        return"Number is palindrome";
    }
    else{
        return"Not a palindrome";
    }
}
int main()
{
    int x;
    cout<<"give a number to check for palindromicity:";
    cin>>x;
    cout<<pali(x);
    return 0;
}