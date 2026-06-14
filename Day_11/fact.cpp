#include <iostream>
using namespace std;
int factorial(int a)
{
    int fact=1,facto;
    if(a==0||a==1){
        return fact;
    }
    else{
    for(int i=a;i>=1;i--){
        fact=i*fact;
    }
    return fact;
    }
}
int main()
{
    int x;
    cout<<"give a numbers:";
    cin>>x;
    cout<<"Factorial of the number is "<<factorial(x);
    return 0;
}