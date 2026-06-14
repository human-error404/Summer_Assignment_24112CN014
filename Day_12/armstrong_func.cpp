#include <iostream>
using namespace std;
string arms(int a)
{
     int num=a;
    int temp=0,sum=0;
    while(num>0){
        temp=num%10;
        sum+=(temp)*temp*temp;
        num=num/10;
        
    }
    if(sum==a){
        return "Number is an Armstrong number";
    }
    else{
        return "not an armstrong number";
    }
}
int main()
{
    int x;
    cout<<"give a number to check armstrong:";
    cin>>x;
    cout<<arms(x);
    return 0;
}