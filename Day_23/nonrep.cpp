#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;
int main()
{
    string st;
    int index=0;
    cout<<"Give a string:";
    getline(cin,st);
    long len=st.length();
    unordered_map<char,int>m;
    queue<int>Q;
    for(int i=0;i<st.size();i++)
    {
        if(m.find(st[i])==m.end())
        {
            Q.push(i);
        }
        m[st[i]]++;
        while(Q.size()>0&&m[st[Q.front()]]>1)
        {
            Q.pop();
        }
    }
    
    if (!Q.empty()) {
        cout << Q.front() << endl;
    } else {
        cout << -1 << endl; // Prints -1 if no unique character exists
    }
    return 0;

}