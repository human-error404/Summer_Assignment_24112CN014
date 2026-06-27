#include <iostream>
#include <string>
using namespace std;
int main()
{
    string string;
    int index=0;
    cout<<"Give a string:";
    getline(cin,string);
    while(string[index]!='\0')
    {
        index++;
    }
    cout<<"The length of string is:"<<index;
    return 0;

}