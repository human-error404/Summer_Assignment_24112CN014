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
    
    for(int i=0;i<index;i++)
    {
        if(string[i]>='a'&&string[i]<='z')
        {
        string[i]='A'+(string[i]-'a');
        }
    }
    cout<<"The string is:"<<string;
    return 0;

}