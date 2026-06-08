#include <iostream>
using namespace std;
int rev(int n,int revs=0)
{
    if(n==0)
    {
        return revs;
    }
    else
    {
        
        int temp=n%10;
        revs=revs*10+temp;
        return rev(n/=10,revs); 
    }
}
int main()
{
    int num;
    cout<<"Give a number:";
    cin>>num;
    cout<<"the reversed number is:"<<rev(num)<<endl;
    return 0;
}