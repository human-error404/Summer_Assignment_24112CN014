#include <iostream>
#include <string>
using namespace std;
int main()
{
    char string[50];
    char up[50];
    int index=0;
    cout<<"Give a string:";
    cin.getline(string,50);
    while(string[index]!='\0')
    {
        index++;
    }
    int start=0;
    int end=index-1;
   while(start<=index-1 && end>=0)
   {
    up[start]=string[end];
    start++;
    end--;    
    }
    up[start]='\0';
    bool ispalindrome=true;
    for(int i=0;i<index;i++)
    {
        if(string[i]!=up[i])
        {
            ispalindrome=false;
            break;
        }
    }
    if(ispalindrome)
    {
        cout<<"String is palindrome";
    }
    else
    {
         cout<<"String is not palindrome";
    }
    return 0;

}