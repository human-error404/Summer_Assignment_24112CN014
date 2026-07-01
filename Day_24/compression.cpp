#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string chars;
    cout<<"Give a string:";
    getline(cin,chars);
    int index=0;
    for(int i=0;i<chars.size();i++)
    {
        char ch=chars[i];
        int count=0;
        while(i<chars.size()&& chars[i]==ch)
        {
            count++;
            i++;

        }
        chars[index++]=ch;
        
        if(count>1)
        {
             string str=to_string(count);
             for(char dig:str)
             {
                  chars[index++]=dig;
             }
        }
        i--;

    }
    chars.resize(index);
    cout<<chars<<index;
}    