#include <iostream>
using namespace std;
int main(){
    int n, fact=1;
    cout<<"Give an integer:";
    cin>>n;
    if(n==0||n==1){
        fact=1;
        cout<<"Factorial="<<fact;
    }
    else{
    for(int i=n;i>=1;i--){
        fact=i*fact;
    }
    cout<<"Factorial is="<<fact<<"\n";
    }
       return 0;
}