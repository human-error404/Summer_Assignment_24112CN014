#include<iostream>
using namespace std;
int main()
{
    string st;
    int index=0;
    cout<<"Give a string:";
    getline(cin,st);
    char first='\0';
    bool found=false;
     for(index=0;index<st.size();index++)
    {
        for(int i=0;i<index;i++)
        {
            if(st[index]==st[i])
            {

                first=st[index];
                found=true;
                break;
            }
        }
        if(found)
        {
            break;
        }
    }

    if(found)
    {
        cout<<"The first repeating character is:"<<first;
    }
    else{
        cout<<"no repeating character";
    }
    return 0;
}