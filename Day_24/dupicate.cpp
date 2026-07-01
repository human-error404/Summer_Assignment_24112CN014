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
    while(index<chars.size()&& chars[index]!='\0')
    {
        bool found=false;
        for(int i=0;i<index;i++)
        {
            if(chars[index]==chars[i])
            {
                found=true;
                break;
            }
        }
      if(found)
      {
        chars.erase(index,1);
      }
      else{
      index++;
      }
    }
    cout<<chars;
}   