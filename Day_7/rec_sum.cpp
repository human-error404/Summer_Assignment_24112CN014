#include <iostream>
using namespace std;
int rec_sum(int num)
{
    if(num==0)
    {
        return num;
    }
    else
    {
        return (num%10)+rec_sum(num/10);
    }
}
int main()
{
    int n;
    cout<<"Give a number:";
    cin>>n;
    cout<<"Sum of digits is:"<<rec_sum(n)<<endl;
    return 0;
}