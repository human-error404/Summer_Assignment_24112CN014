#include<iostream>
#include<algorithm>
using namespace std;
bool isanagram(string st, string ts)
{
    if(st.length()!=ts.length())
    {
        return false;
    }
    else
    {
    sort(st.begin(),st.end());
    sort(ts.begin(),ts.end());
    return st==ts;
    }

}
int main()
{
    string st,ts;
    cout<<"Give a string 1:";
    getline(cin,st);
    cout<<"Give a string 2:";
    getline(cin,ts);
    if(isanagram(st,ts))
    {
        cout<<"String is an anagram";
    }
    else
    {
        cout<<"String is not an anagram";
    }
    return 0;
}