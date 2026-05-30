#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give anumber:";
    cin>>n;
    int Is_prime=0;
    int num=n;
    if(num<2){
        cout<<"Isn't prime";
        return 0;
    }
    for(int i=num-1;i>1;i--){
        Is_prime=num%i==0&&i!=num;
        if(Is_prime==1){
            break;
        }        
    }
    if(Is_prime==1){
        cout<<"Isn't prime";
    }
    else{
        cout<<"Is prime";
    }

    
}
