#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give a number to write prime number upto:";
    cin>>n;
    bool Is_prime=true;
    int num=n;
    if(num<2){
        Is_prime=false;
    }
    else{ for(int num=2;num<=n;num++){
        bool Is_prime=true;
    for(int i=2;i<num;i++)
    {
        if(num%i==0){
            Is_prime=false;
            break;
        }
    }
        if(Is_prime){
            cout<<num<<" ";
        }
    }
}
    cout<<"\n";
    return 0;      
    }
    

    

