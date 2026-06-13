#include <iostream>
using namespace std;
int max_(int a, int b)
{
    int max_two=max(a,b);
    return max_two;
}
int main()
{
    int x,y;
    cout<<"give two numbers:";
    cin>>x>>y;
    cout<<"Max of given numbers is"<<max_(x,y);
    return 0;
}