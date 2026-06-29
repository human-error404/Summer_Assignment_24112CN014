#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st;
    int index=0;
    cout<<"Give a string:";
    getline(cin,st);
    while(st[index]!='\0')
    {
        if(st[index]==' ')
        {
            index++;
            continue;
        }
        cout<<st[index];
        index++;
    }
    cout<<endl;
    return 0;

}