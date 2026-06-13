#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c;
    c= a+b;
    return c;
}
int main()
{
    int x,y;
    cout<<"Give two number for summing:";
    cin>>x>>y;
    cout<<"the sum of "<<x<<" and "<<y<<" is "<<sum(x,y);
    return 0;

}