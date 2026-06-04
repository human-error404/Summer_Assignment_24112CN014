#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,x;
    cout<<"series till which number";
    cin>>x;
     for(n=0;n<=x;n++)
    {
    int num=n;
    int digit=0,temp=0,sum=0;
    while(num>0){
        digit++;
        num/=10;
    }
    num=n;
    while(num>0){
        temp=num%10;
        sum+=round(pow(temp,digit));
        num/=10;
    }
    if(n==sum)
    {
        cout<<sum<<endl;
    }
    
}

cout<<endl;
return 0;

}