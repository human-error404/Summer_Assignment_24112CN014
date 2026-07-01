#include <iostream>
#include <string>
using namespace std;
int main()
{
    string chars;
    cout<<"Give a string:";
    getline(cin,chars);
    int index=0;
    
    int max_count=0;
    string ch="";
    while(index<chars.size())
    {
        int count=0;
        int word_start=index;
        while(chars[index]!=' '&& index<chars.size())
        {
            count++;
            index++;
        }
        if(count>max_count)
        {
            max_count=count;
            ch= chars.substr(word_start,count);
        }

        index++;
    }
    cout<<max_count<<" "<<ch;
    return 0;
}