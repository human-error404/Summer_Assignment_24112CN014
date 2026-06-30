#include<iostream>
using namespace std;
int main()
{
    string st;
    int index=0,i=0;
    int count=0;
    int maxcount=0;
    cout<<"Give a string:";
    getline(cin,st);
    char first='\0';
     for(index=0;index<st.size();index++)
    {
        for(i=0;i<index;i++)
        {
            if(st[index]==st[i])
            {

                count++;
            }
        }
        if(maxcount<count)
        {
            maxcount=count;
            first=st[i];
        }
    }

    cout<<"the max frequency character is "<<first<<" with a frequency of "<<maxcount+1;
}