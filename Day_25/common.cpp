#include<iostream>
#include<algorithm>
using namespace std;
void common(string st, string ts)
{
    int i1=0;
    string ch;
     while(i1<st.size())
     {  bool found=false;
        int i2=0;
        while(i2<ts.size())
        {
            if(st[i1]==ts[i2])
            {
                found=true;
                break;
            }
            i2++;
        }
        if(found)
        {
            ch=ch+st[i1];
        }
        i1++;
     }
     cout<<ch;
}
int main()
{
    string st,ts;
    cout<<"Give a string 1:";
    getline(cin,st);
    cout<<"Give a string 2:";
    getline(cin,ts);
    common(st,ts);
    return 0;
}