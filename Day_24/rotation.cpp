#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string st;
    cout<<"Give a string:";
    getline(cin,st);
    rotate(st.begin(),st.begin()+1,st.end());
    cout<<"right rotated string is: "<<st;
    return 0;
}