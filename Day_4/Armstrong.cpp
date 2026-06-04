#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give a number:";
    cin>>n;
    int num=n;
    int temp=0,sum=0;
    while(num>0){
        temp=num%10;
        sum+=(temp)*temp*temp;
        num=num/10;
        
    }
    if(sum==n){
        cout<<"Number is an Armstrong number";
    }
    else{
        cout<<"not an armstrong number";
    }
    return 0;
    
}