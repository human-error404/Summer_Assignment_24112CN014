#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give a number";
    cin>>n;
    int sum=0,temp=0;
    int num=n;
    if(n==0){
        sum=1;
    }
    else{
    while(num>0){
        temp=num%10;
        int prod=1;
        for(int i=1;i<=temp;i++)
        {
            prod=i*prod;
        }
        sum+=prod;
        num=num/10;
    }
}
    if(sum==n)
    {
        cout<<"it's a strong number";
    }
    else{
        cout<<"Not a strong number";
    }
    return 0;

}
