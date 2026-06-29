#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st;
    int index=0;
    cout<<"Give a string:";
    getline(cin,st);
    long len=st.length();
    for(int i=65;i<=90;i++)
    {
        int count=0;
        for(int k=0;k<len;k++)
        {
            if(st[k]==i||st[k]==i+32)
            {
                count++;
            }
        }
        if(count>0)
        {
        cout<<"frequency "<<(char)i<<count<<endl;
        }
    
    }
    return 0;

}